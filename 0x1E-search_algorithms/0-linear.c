#include "search_algos.h"

/**
 * linear_search - function that searches value in an array
 * @array: pointer to input array
 * @size:  num size of the array
 * @value: value to search for search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < (int)size; n++)
	{
		printf("Value checked array[%u] = [%d]\n", n, array[n]);
		if (value == array[n])
			return (n);
	}
	return (-1);
}
