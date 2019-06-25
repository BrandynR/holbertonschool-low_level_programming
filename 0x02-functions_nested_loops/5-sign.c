#include "holberton.h"

/**
 *int print_sign(int n) - prints the sign of a number
 *
 *Return:returns 1 and print + if greater than 0, -1 and prints _ if less than 0
 */

int print_sign(int n)

	int n;
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	if (n == '0')
	{
		_putchar('0');
		return (0);
	}
}
