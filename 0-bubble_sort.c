#include "sort.h"
#include <stdlib.h>
/**
 * bubble_sort - Sorts an array of integers
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	int swapped;
	size_t i;

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		/* Print the current array */
	} while (swapped);
}
