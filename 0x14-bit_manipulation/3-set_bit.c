#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit -  function that sets the value of a bit
 * @n: the point n
 * @index: the index number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1uL << index) | *n);
	return (1);
}
