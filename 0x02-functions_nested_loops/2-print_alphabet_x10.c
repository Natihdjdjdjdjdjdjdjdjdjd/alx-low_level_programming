#include "main.h"

/**
 * main - a function that prints 10 times the alphabet
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
