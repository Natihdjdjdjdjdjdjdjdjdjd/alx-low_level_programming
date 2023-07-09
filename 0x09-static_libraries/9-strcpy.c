#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -  function that copies the string pointed to by src
 * ncluding the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy the first sring
 * @src: copy the second string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
