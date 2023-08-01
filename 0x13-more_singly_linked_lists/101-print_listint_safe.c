#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len -  function that count aloop
 * @head: the head pointer
 * Return: nothing 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t i = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				i++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				i++;
				tortoise = tortoise->next;
			}
			return (i);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j = 0;

	i = looped_listint_len(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}
