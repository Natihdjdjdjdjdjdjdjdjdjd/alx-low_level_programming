#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: number of listed elment
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
