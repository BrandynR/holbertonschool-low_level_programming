#include "holberton.h"

/**
 *print_diagonal - printing a line diagonal
 *@n: n is the number times '\' will print
 *Return: void
 */

void print_diagonal(int n)
{
	int cnt, cnt2;

	for (cnt = 0; cnt < n; cnt++)
	{
		for (cnt2 = 0; cnt2 <= cnt; cnt2++)
		{
			if (cnt2 != cnt)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
