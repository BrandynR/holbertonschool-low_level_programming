#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: number to multiply
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, one, ten, hun, mult;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = row * col;
				one = mult % 10;
				ten = mult / 10 % 10;
				hun = mult / 100;
				if (hun == 0 && col != 0)
				{
					_putchar(' ');
					if (ten == 0)
						_putchar(' ');
					else
						_putchar(ten + '0');
					_putchar(one + '0');
				}
				else if (hun != 0)
				{
					_putchar(hun + '0');
					_putchar(ten + '0');
					_putchar(one + '0');
				}
				if (col == 0)
					_putchar('0');
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			col = 0;
		}
	}
}
