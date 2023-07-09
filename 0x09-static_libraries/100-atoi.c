#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: convert to s pointer
 * Return: always 0
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int y = 0;
	int min = 1;
	int isi = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			isi = 1;
			y = (y * 10) + (s[x] - '0');
			x++;
		}
		if (isi == 1)
		{
			break;
		}
		x++;
	}
	y *= min;
	return (y);
}
