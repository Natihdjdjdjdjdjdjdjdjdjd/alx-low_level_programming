#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (y = 0; y <= 'f'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
