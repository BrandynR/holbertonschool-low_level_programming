#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - bubble sorts an array
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, flag;

	while (1)
	{
		if (size < 2)
			break;
		flag = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
