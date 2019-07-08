#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int  x, y;

	x = 1;
	y = 10000;
	if (n > 0)
	{
		n = (n * -1);
		x = (x * -1);
	}
	if  (n != 0)
	{
		while ((n / y) ==  0)
		{
			y = y / 10;
		}
		if (x == 1)
			_putchar('-');
		while (y >= 1)
		{
			_putchar(-(n / y) + '0');
			n = n % y;
			y = y / 10;
		}
	}
	else
		_putchar('0');
}
