#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - unction that converts a binary number to an unsigned int.
 * @b: a string charcter for our binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int valdec = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] > '1' || b[x] < '0')
			return (0);
		valdec =  2 * valdec + (b[x] - '0');
	}
	return (valdec);
}
