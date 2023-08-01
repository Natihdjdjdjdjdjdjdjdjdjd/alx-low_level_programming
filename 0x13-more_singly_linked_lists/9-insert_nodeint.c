#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: the double pointer of the node
 * @idx: the node index
 * @n: the number of node elment
 * Return: adress of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int j;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (j = 0; j < idx - 1 && temp != NULL; j++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}

