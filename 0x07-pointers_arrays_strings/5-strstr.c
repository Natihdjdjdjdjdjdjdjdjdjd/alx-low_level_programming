#include "main.h"
#include <stdio.h>
/**
 * _strstr -  function that locates a substring.
 * @haystack: first input
 * @needle: second input
 * Return: to haystack
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}
	return ('\0');
}
