#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end -  function that adds a new node at the end
 * @head: the  head of the node
 * @n: the number of node elments
 * Return: NULL (nothing)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
