#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that multiplies two integers.
 * @c: we will check character
 * Return: 1 for digit char and 0 always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
