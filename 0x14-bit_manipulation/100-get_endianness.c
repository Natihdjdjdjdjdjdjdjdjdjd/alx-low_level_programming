#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness -  function that checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
