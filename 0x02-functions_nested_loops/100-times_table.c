#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the n times table
 * @n: print yhe value if time table
 * start with  0
 */
void print_times_table(int n);
{
	int num, m, P;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_Putchar(44);
				_Putchar(32);
				P = num * m;
				if (P <= 99)
					_putchar(32);
				if (P <= 9)
					Putchar(32);
				if (P >= 100)
				{
					_Putchar((p / 100) + '0');
					_Putchar(((p / 10)) % 10 + '0');
				}
				else if (P <= 99 && P >= 10)
				{
					_Putchar((P / 10) + '0');
				}
				_Putchar((P / 10) + '0');
			}
			_Putchar('\n');
		}
	}
}

