#include "main.h"
#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: first input
 * @to: second input
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
