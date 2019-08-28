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
	return((n < m) ? n : m);
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
		return(-1);

	while (array[get_min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long)prev, (unsigned long)array[prev]);
		if (array[get_min(step + step, size) - 1] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       (unsigned long)(prev),
			       (unsigned long)(step));
			break;
		}
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return(-1);
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long)prev, (unsigned long)array[prev]);
		prev++;
		if (prev == get_min(step, size))
			return(-1);
	}
	if (array[prev] == value)
		return(prev);

	return (-1);
}
