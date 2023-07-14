#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  function that creates an array of integers.
 * @min: input min
 * @max: input max
 * Return: always NUll
 */
int *array_range(int min, int max)
{
	int *n, i = 0;

	if (min > max)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}
