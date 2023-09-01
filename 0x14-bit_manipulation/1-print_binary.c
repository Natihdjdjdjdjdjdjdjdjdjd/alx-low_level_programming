#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: nuber of binary
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	int x, path = 0;
	unsigned long int our;

	for (x = 63; x >= 0; x--)
	{
		our = n >> x;

		if (our & 1)
		{
			_putchar('1');
			path++;
		}
		else if (path)
			_putchar('0');
	}
	if (!path)
		_putchar('0');
}
