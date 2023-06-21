#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @x: we will check thr number
 * Return: 1 for positive number ,-1 for negative  num , 0 for always
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (x < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
