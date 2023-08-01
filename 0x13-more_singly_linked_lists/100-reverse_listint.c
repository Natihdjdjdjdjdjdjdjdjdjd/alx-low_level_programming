#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - function that reverses
 * @head: the head is the poiner of the node
 * Return:  the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	pre = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
