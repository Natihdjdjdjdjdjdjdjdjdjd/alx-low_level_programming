#include "main.h"
#include <stdio.h>
/**
 * _memcpy - unction that copies memory area.
 * @dest: store memory
 * @src: copy memory
 * @n: number of byte
 * Return: at dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
