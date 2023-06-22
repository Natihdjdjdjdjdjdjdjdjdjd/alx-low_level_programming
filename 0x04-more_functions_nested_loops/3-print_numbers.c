#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
