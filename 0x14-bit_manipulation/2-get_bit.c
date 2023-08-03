#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit -  function that returns the value of a bit
 * @n: number of return value
 * @index: the number of index
 * Return:  the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 65)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
