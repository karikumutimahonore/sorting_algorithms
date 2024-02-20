#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	bool swap;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap = false;
		for (j = 0; j < size - i - 1; j++)
		{
			temp = array[j];
			if (temp > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swap = true;
				print_array(array, size);
			}
		}
		if (!swap)
			break;
	}
}
