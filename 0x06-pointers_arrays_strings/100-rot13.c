#include "main.h"
#include <stdio.h>
/**
 * *rot13 -  function that encodes a string
 * @n: check n
 * Return: always 0
 */
char *rot13(char *n)
{
	int x;
	int y;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
		if (n[x] == s1[y])
		{
		n[x] = s2[y];
		break;
		}
		}
	}
	return (n);
}
