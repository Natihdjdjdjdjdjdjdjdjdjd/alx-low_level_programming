#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: the printed binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			x++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
