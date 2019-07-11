#include "holberton.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int cnt, cnt2, spc;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (cnt = 0; cnt < size; cnt++)
	{
		for (cnt2 = 0; cnt2 < size; cnt2++)
		{
			spc = size - cnt - 1;
			if (cnt2 < spc)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
