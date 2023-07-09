#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: we will check the charcter
 * Return: 1 for uppercase 0 for always
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
