#include "main.h"
#include <stdio.h>

/**
 * print_number -  function that prints an integer.
 * @n: check the integer
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int x;
	x = n;

	if (n < 0)
	{
		putchar(45);
		x = -n;
	}
	if (x / 10)
	{
		print_number(x);
	}
		putchar((x % 10) + '0');
}
