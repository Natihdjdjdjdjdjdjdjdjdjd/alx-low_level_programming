#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: check num in digonal
 * Return: always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == b)
					putchar('\\');
				else if (c < b)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
