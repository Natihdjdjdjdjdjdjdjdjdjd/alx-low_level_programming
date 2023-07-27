#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked.
 *
 * @h: list the name
 * Return: the number of the node
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
