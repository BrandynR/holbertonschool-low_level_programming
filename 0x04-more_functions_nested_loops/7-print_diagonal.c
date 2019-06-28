#include "holberton.h"

/**
 *print_diagonal - printing a line diagonal
 *@n: n is the number times '\' will print
 *Return: void
 */

void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(92);
	}
	_putchar('\n');
}
