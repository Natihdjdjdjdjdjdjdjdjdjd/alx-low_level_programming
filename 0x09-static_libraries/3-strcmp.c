#include "main.h"
#include <stdio.h>
/**
 *  _strcmp - a function that compares two strings.
 *  @s1: the first string
 *  @s2: the second string
 *  Return: always s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
