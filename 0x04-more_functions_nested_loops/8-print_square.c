#include "holberton.h"

/**
 *print_square - prints a square of #
 *@size: is the size of the square
 *Return: void prints a square
 */

void print_square(int size)
{
	int row;

	for (row = 0; row <= 12; row++)
		_putchar(35);

		for (size = 0; size < row; size++)
		{
			if (size <= 0)
				_putchar('\n');
		}
	_putchar(35);
}
