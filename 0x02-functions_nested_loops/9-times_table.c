#include "main.h"
/**
 * times_table -  a function that prints the 9 times table
 * Return: always 0
 */
void times_table(void)
{
	int a, b, mul, rem, div;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			mul = a * b;
			if (mul > 9)
			{
				rem = mul % 10;
				div = (mul - rem) / 10;
				_putchar(',');
				_putchar(32);
				_putchar(div + '0');
				_putchar(rem + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
		}
			_putchar('\n');
		}
}
