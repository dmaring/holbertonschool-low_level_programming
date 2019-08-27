#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if array NULL or not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       (unsigned long)i, array[i]);
		if (value == array[i])
			return ((int)i);
	};

	return (-1);
}
