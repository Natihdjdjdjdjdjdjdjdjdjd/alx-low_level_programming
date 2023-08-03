#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: the  pointer number
 * @index: the number of index
 * Return: sucess for 1 and -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1uL << index) & *n);
	return (1);
}
