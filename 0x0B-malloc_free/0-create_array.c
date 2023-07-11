#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars
 *, and initializes it with a specific cha.
 * @c: input value
 * @size: size of array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}

	return (str);
}
