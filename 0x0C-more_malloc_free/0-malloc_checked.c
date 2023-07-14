#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: the size of allocate
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
