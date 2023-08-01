#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t
 * @head: the heaad of the node
 * Return: void (nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while  (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
