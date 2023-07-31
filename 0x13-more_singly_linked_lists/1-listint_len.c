#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len -  function that returns the number of elements in a linked
 * @h: the liste element
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
