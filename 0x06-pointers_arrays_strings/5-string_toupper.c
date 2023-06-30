#include "main.h"
#include <stdio.h>
/**
 * *string_toupper -  function that changes all lowercase
 * letters of a string to uppercase.
 * @mn: change  the stirng
 * Return: to changed string
 */
char *string_toupper(char *mn)
{
	int x = 0;

	while (mn[x])
	{
		if (mn[x] >= 'a' && mn[x] <= 'z')
			mn[x] -= 32;
		x++;
	}
	return (mn);
}
