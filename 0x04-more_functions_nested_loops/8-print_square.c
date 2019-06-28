#include "holberton.h"

/**
 *print_square - prints a square of #
 *@size: is the size of the square
 *Return: void prints a square
 */

void print_square(int size)
{
	int row, tag;

	for (row = 0; row < size; row++)
	{
		for (tag = 0; tag < size; tag++)
		{
			if (size <=0)
				_putchar('\n');
					_putchar(35);
		}
	_putchar('\n');
	}
}
