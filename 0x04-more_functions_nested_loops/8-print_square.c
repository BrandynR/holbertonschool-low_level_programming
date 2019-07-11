#include "holberton.h"

/**
 *print_square - prints a square of #
 *@size: is the size of the square
 *Return: void prints a square
 */

void print_square(int size)
{
	int row, tag;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (tag = 0; tag < size; tag++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
