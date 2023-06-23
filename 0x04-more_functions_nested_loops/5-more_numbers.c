#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * Return: always 10 time since 0 to 14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}
