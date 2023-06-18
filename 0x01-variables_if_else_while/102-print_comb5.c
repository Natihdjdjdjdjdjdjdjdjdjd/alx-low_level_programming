#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program prints all possible combinations of two two-digit.
 * Return: always 0
 */

int main(void)
{
	int x = 0, y;

	while (x <= 99)
	{
		y = x;
		while (x <= 99)
		{
			if (y != x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
