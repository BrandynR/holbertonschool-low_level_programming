#include "holberton.h"

/**
 *print_line - printing a line in C
 *@n: n is the number times '_' will print
 *Return: void
 */

void print_line(int n)
{
	int x;

		for (x = 0; x < n; x++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			_putchar(95);
		}
		_putchar('\n');
}
