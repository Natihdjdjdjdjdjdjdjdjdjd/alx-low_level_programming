#include "main.h"
#include <stdio.h>
/**
 * *_strncpy -  function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: third intger
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[x++])
		y++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = y; x < n; x++)
		dest[x] = '\0';

	return (dest);

}
