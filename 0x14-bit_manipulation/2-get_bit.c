#include "main.h"
#include <stdio.h>
/**
 * get_bit - unction that returns the value of a bit at a given index.
 * @n: number of binary
 * @index: the value of index
 * Return: always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bite;

	bite = (n >> index);
	if (index > 32)
		return (-1);
	return (bite & 1);
}
