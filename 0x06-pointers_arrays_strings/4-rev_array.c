#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: first entery
 * @n: second entery
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y >= n / 2; y--)
	{
		x = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = x;
	}
}
