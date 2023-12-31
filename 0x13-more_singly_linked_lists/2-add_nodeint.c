#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: pointer to  head node
 * @n: the number od new node
 * Return: NULL (nothing)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
