#include "holberton.h"

/**
 * print_number - prints a number
 * @n: number
 * Return: nothing;
 */

void print_number(int n)
{
	int  x, y;

	y  = 5000;
	x = 1;
	if (n > 0)
	{
		n *= -1;
		x *= -1;
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
