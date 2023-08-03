#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - function that returns the number of bits
 * @n: the firdt integer
 * @m: the second integer bits
 * Return: the nuberof integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int first;
	unsigned long int second = n ^ m;
	int x, y = 0;

	for (x = 63; x >= 0; x--)
	{
		first = second >> x;
		if (first & 1)
			y++;
	}
	return (y);
}
