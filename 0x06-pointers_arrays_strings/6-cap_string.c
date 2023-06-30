#include "main.h"
#include <stdio.h>
/**
 * *cap_string - function that capitalizes all words of a string.
 * @n: the capitalized string
 * Return: to string n.
 */
char *cap_string(char *n)
{
	int x = 0;

	while (n[x])
	{
		while (!(n[x] >= 'a' && n[x] <= 'z'))
		x++;

		if (n[x - 1] == ' ' ||
				n[x - 1] == '\t' ||
				n[x - 1] == '\n' ||
				n[x - 1] == ',' ||
				n[x - 1] == ';' ||
				n[x - 1] == '.' ||
				n[x - 1] == '!' ||
				n[x - 1] == '?' ||
				n[x - 1] == '"' ||
				n[x - 1] == '(' ||
				n[x - 1] == ')' ||
				n[x - 1] == '{' ||
				n[x - 1] == '}' ||
				x == 0)
			n[x] -= 32;
		x++;
	}
	return (n);
}
