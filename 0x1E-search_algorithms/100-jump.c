#include "search_algos.h"
#include <math.h>

/**
 * get_min - return the minimum of two numbers
 * @n: number 1
 * @m: number 2
 *
 * Return: smallest number
 */
size_t get_min(int n, int m)
{
	return ((n < m) ? n : m);
}

/**
 * jump_search - a function that searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is found or -1 if array NULL or not found
 */
int jump_search(int *array, size_t size, int value)
{

	/* find the step sqroot of the size */
	size_t step = sqrt((int)size);
	size_t prev = 0;

	if (!array)
		return (-1);
	printf("Value checked array[%lu] = [%lu]\n",
	       (unsigned long)prev, (unsigned long)array[prev]);
	while (array[step] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long)prev, (unsigned long)array[prev]);
		if (step >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       (unsigned long)(prev),
	       (unsigned long)(step));

	while (prev < size)
	{
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long)prev, (unsigned long)array[prev]);
		if (array[prev] == value)
			return (prev);
		if (prev > (size - 1))
			return (-1);
		prev++;
	}

	return (-1);
}
