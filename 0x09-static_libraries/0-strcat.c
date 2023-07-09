#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @src: the first string
 * @dest: the second string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
