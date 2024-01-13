#include "sort.h"

/**
 * bubble_sort - sorts array ints ascending order
 * @array: array unsorted of ints
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swap = 1;
	int temp;

	while (swap != 0)
	{
		swap = 0;
		for (i = 0; i < size -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = 1;
				temp = array[i +1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
