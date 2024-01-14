#include "sort.h"

/**
 * selection_sort - sorts array of int in ascending order
 * array: pointer to the array
 * size: pointer to the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int minor;
	size_t temp_indx = 0;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		minor = array[i];

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < minor)
			{
				minor = array[j];
				temp_indx = j;
			}
		}
		if (temp_indx != i)
		{
			array[temp_indx] = array[i];
			array[i] = minor;
			print_array(array, size);
		}
	}
}
