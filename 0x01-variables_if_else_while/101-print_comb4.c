#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  program  print all possible different combinations of three digits
 * Return: always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if ((y != x) != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x == 7 && y == 8)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
