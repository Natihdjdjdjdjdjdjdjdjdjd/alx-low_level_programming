#include "search_algos.h"

/**
 * jump_search - searches for a vulue in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the value in the array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t n, m, index;

	if (array == NULL || size == 0)
		return (-1);

	m = sqrt(size);
	for (n = index = 0; index < size && array[index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		n = index;
		index += m;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", n, index);

	index = index < size - 1 ? index : size - 1;
	for (; n < index && array[n] < value; n++)
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	printf("Value checked array[%ld] = [%d]\n", n, array[n]);

	return (array[n] == value ? (int)n : -1);
}
