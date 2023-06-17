#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 1; x < 11; x++)
	{
		putchar(x);
		if (x != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

