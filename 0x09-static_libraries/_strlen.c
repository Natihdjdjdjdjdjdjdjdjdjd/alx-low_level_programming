#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: check the pointer at s
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
