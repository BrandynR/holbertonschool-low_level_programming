#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 *
 * @array: array to work again
 * @size: size of array
 * @action: function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		(*action)(array[i++]);
	}
}
