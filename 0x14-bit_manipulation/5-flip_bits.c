#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need
 * @n: the nuber of binary
 * @m: the end of binary
 * Return: always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, valflip = 0;
	unsigned long int y = sizeof(unsigned long int) * 8;

	for (x = 0; x < y; x++)
	{
		if ((m & 1) != (n & 1))
			valflip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (valflip);
}
