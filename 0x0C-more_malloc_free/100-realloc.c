#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc -  function that reallocates a memory block using malloc and free
 * @ptr: previous located memory
 * @old_size: size of aloccated
 * @new_size: byte in new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n = malloc(new_size);

		if (n == NULL)
			return (NULL);

		return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	n = malloc(new_size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		n[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (n);
}
