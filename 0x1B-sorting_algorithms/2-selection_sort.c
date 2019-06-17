#include <stdlib.h>
#include "sort.h"


/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int selected_idx, min_idx;
	int temp;

	if (size < 2)
		return;

	/* loop through array */
	/* keep track of selected */
	/* keep track of min value and index */
	/* compare min value with each value in array */

	for (i = 0; i < size; i++)
	{
		selected_idx = i;
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				/* store min value and idx */
				min_idx = j;
			}
		}
		/* swap selected with min */
		temp = array[selected_idx];
		array[selected_idx] = array[min_idx];
		array[min_idx] = temp;
		print_array(array, size);
	}
}
