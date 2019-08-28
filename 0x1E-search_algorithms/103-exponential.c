#include "search_algos.h"
#include <math.h>


/**
 * print_array - a function that prints out an array
 * @beg: pointer to the beginning of the array
 * @end: pointer to the end of the array
 * @array: array to search
 *
 * Return: void
 */
void print_array(int beg, int end, int *array)
{
	printf("Searching in array: ");
	while (beg < end)
	{
		printf("%d", array[beg]);
		beg++;
		if (beg != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * search - recursive binary search function
 * @value: value to search
 * @low: low index as int
 * @high: high index as int
 * @array: array to search
 *
 * Return: index of found value or -1 if not found
 */
int search(int value, int low, int high, int *array)
{
	int mid;

	if (high >= low)
	{
		print_array(low, high + 1, array);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			return (search(value, low, mid - 1, array));
		else if (value > array[mid])
			return (search(value, mid + 1, high, array));
	}
	return (-1);
}


/**
 * exponential_search - a function that searches for a value in an array of
 * integers using the Exponential search algorithm
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if array NULL or not found
 */
int exponential_search(int *array, size_t size, int value)
{

	size_t step = 1;
	size_t prev = 1;

	if (!array)
		return (-1);
	while (array[step] < value)
	{
		prev = step;
		step *= 2;
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long)prev, (unsigned long)array[prev]);
		if (step >= size)
			break;
	}
	size--;
	step = (step < size) ? step : size;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       (unsigned long)(prev),
	       (unsigned long)(step));

	return (search(value, prev, step, array));
}
