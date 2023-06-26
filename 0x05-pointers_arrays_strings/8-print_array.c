#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integer
 * @a: print the first elment
 * @n: print an element
 * Return: always void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}


