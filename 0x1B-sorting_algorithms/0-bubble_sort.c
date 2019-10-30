#include "sort.h"

/**
 * swap: swap array elements
 * @ptr1: ptr to array element
 * @ptr2: prt to array element
 * Return: void
 */
void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/**
 * sort_array - Returns if an array is sorted or not
 * @array: The array to check
 * @size: The size of the array
 *
 * Return: 1 if sorted, otherwise 0
 */
int sort_array(int *array, size_t size)
{
	int loop = 0;

	while (loop != (int)size)
	{
		if (array[loop - 1] > array[loop])
			return (0);

		loop++;
	}

	return (1);
}

/**
 * bubble_sort - sort an array of integers asending order
 * @array: input array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char isSorted;

	for (i = 1; i < size; i++)
	{
		while (sort_array(array, size) == 0)
		{
			isSorted = 1;
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					isSorted = 0;
					print_array(array, size);
				}
			}
		}
		/* if no two elements were swapped by inner loop, then break */
		if (isSorted == 1)
			break;
	}
}
