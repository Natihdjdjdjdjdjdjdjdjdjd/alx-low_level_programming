#include <stdio.h>

/**
 * main - A program that print the alphabet in lowercase except q and e
 * Return: always 0 (succeses)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
