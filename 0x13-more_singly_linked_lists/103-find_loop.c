#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *find_listint_loop -  function that finds the loop in a linked list.
 * @head: the linked list point
 * @Return: NULL (nothing)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ayu = head;
	listint_t *yosan = head;

	if (!head)
		return (NULL);

	while (ayu && yosan && yosan->next)
	{
		yosan = yosan->next->next;
		ayu = ayu->next;

		if (yosan == ayu)
		{
			ayu = head;
			while (ayu != yosan)
			{
				ayu = ayu->next;
				yosan = yosan->next;
			}
			return (yosan);
		}
	}
	return (NULL);
}
