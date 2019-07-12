#include "holberton.h"

/**
 *times_table - prints a times table of 9
 *
 *Return Always 0
 */

void times_table(void)
{
	int row, col;
	int ones, tens;
	int mult;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mult = row * col;
			if (mult >= 10)
			{
				ones = mult % 10;
				tens = mult / 10;
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');

			}
			if (col != 9)
			{
				_putchar(',');
			}
			if (col == 9)
			{
				_putchar('\n');
			}
		}
		col = 0;
	}
}
