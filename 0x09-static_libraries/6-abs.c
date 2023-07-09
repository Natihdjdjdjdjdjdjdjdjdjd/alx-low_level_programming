#include "main.h"
#include <stdio.h>

/**
 * _abs -  function that computes the absolute value of an integer
 * @c: we copute the number
 * Return: always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
