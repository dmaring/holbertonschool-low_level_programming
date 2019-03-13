#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array to search
 * @size: size of input array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of the first element that cmp does not return 0,
 * if no elements match return -1, if s <= 0 return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
