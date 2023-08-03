#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a binary number
 *@b: number of binary
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		i = 2 * i + (b[j] - '0');
	}
	return (i);
}
