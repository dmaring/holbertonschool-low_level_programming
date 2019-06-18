#include "sort.h"

/**
 * swap - swaps the values of two pointers
 *
 * @ptr1: first pointer
 * @ptr2: second pointer
 */
void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


/**
 * partition - a function that partitions using Lomuto scheme
 *
 * @array: input array of integers to be sorted
 * @start: start index of list
 * @size: size of the array
 * @end: end index of list
 * Return: index of the pivot point
 */
int partition(int *array, size_t start, size_t end, size_t size)
{
	int i = start - 1;

	while (start < end)
	{
		if (array[start] < array[end])
		{
			i++;
			if (array[i] != array[start])
			{
				swap(&array[i], &array[start]);
				print_array(array, size);
			}
		}
		start++;
	}
	i++;

	if (array[i] != array[end])
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}
	return (i);
}


/**
 * quicker_sort -  a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm and Lomuto partion scheme
 *
 * @array: input array of integers to be sorted
 * @start: beginning of array
 * @end: end of the array
 * @size: size of the integer array
 */
void quicker_sort(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quicker_sort(array, start, pivot - 1, size);
		quicker_sort(array, pivot + 1, end, size);
	}
}


/**
 * quick_sort -  a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm and Lomuto partion scheme
 *
 * @array: input array of integers to be sorted
 * @size: size of the integer array
 */
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	if (size < 2)
		return;

	quicker_sort(array, start, end, size);
}
