#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @x: the  character should be checked
 * Return: 1 for lowercase charecter or 0 for always
 */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
		return (1);
		}
		return (0);
}
