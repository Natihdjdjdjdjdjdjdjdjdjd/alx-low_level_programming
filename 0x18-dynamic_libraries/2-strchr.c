#include "main.h"
#include <stdio.h>
/**
 * _strchr -  a function that locates a character in a string.
 * @s: the first input
 * @c: the second input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
