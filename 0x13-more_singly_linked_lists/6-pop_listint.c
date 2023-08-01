#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head node
 * @head: the head pointer of the node
 * Return: NULL (nothing)
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || (*head) == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
