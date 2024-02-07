#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: hjjgjhgjg 
  * Description: Prints a value every the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, r;

	if (array == NULL)
		return (-1);

	for (y = 0, r = size - 1; r >= y;)
	{
		x = y + (((double)(r - y) / (array[r] - array[y])) * (value - array[y]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] < value)
			r = x + 1;
		else
			y = x - 1;
	}

	return (-1);
}
