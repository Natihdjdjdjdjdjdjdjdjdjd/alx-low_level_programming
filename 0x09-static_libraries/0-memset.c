#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s: start adress of memory
 * @b: the wnated value
 * @n: numberof to change
 * Return: with s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
