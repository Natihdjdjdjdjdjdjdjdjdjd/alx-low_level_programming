#include "main.h"
#include <stdio.h>

/**
 * _abs -  function that computes the absolute value of an integer
 * @x: we copute the number
 * Return: always 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}

