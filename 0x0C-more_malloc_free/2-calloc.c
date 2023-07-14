#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc -  function that allocates memory for an array
 * @nmemb:the first int
 * @size: the size of element
 * Return: NUll
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	n = malloc(j);

	if (n == NULL)
		return (NULL);

	while (i < j)
	{
		n[i] = 0;
		i++;
	}

	return (n);
}

