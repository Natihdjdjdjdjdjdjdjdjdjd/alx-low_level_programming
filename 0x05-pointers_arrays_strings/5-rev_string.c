#include "main.h"
#include <stdio.h>

/**
 * rev_string -  function that reverses a string.
 * @s: print the riverse string
 * Return: always 0
 */
void rev_string(char *s)
{
	int l = 0, i = 0;

	char tmp;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
