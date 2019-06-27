#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints int up to 98
 *@n: Represents the starting point number
 *Return:no return void
 */

void print_to_98(int n)
{
	_putchar(n);
	_putchar(',');
	_putchar(' ');

	if (n < 98)
	(n++);

	else if (n > 98)
		(n--);

	else
		_putchar('9');
	_putchar('8');
}
