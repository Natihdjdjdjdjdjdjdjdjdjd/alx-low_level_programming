#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @s: input string to print
 * Return: to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
