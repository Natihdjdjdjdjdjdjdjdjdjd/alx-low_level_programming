#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * @x: we will print the number
 * Return:  always 0
 */

int print_last_digit(int x)
{
	int lastdigit;

	lastdigit = x % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}
