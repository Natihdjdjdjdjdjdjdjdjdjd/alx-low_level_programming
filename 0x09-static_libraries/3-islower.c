#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: the  character should be checked
 * Return: 1 for lowercase charecter or 0 for always
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
		}
		return (0);
}
