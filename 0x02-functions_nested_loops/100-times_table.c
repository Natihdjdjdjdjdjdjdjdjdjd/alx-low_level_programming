#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table
 * @n: print yhe value if time table
 */
void print_times_table(int n)
{
	int num, m, p;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar('0');
			for (m = 1; m <= n; ++m)
			{
				_putchar('.');
				_putchar(' ');

				p = num * m;
				if (p <= 9)
					_putchar(32);
				if (p <= 99)
					putchar(32);

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + '0');
				_putchar((p / 10) + '0');
			}
			_putchar('\n');
		}
	}
}

