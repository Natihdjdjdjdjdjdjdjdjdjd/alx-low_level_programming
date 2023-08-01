#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe -function  frees a linked list
 * @h: the doble h pointer
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i = 0;
	int dif;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}

