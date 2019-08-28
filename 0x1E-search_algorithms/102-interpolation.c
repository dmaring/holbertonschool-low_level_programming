#include "search_algos.h"


/**
 * search - recursive interpolation search function
 * @value: value to search
 * @low: low index as int
 * @high: high index as int
 * @array: array to search
 *
 * Return: index of found value or -1 if not found
 */
int search(int value, int low, int high, int *array)
{
	size_t pos;

	if (high >= low)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) *
			     (value - array[low]));
		if ((int)pos > (low + high))
		{
			printf("Value checked array[%lu] is out of range\n"
			       , pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);


		if (array[pos] == value)
			return (pos);
		else if (value < array[pos])
			return (search(value, low, pos - 1, array));
		else if (value > array[pos])
			return (search(value, pos + 1, high, array));
	}
	return (-1);
}

/**
 * interpolation_search - a function that searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if array NULL or not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size = (int)size;

	if (!array)
		return (-1);

	return (search(value, 0, size - 1, array));
}
