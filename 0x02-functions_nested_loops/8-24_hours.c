#include "holberton.h"

/**
 *jack_bauer - prints each minute of the day
 *
 *Return: Always 0
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w  = '0'; w <= '2'; w++)
		for (x = '0'; x <= '3'; x++)
			for (y = '0'; y <= '5'; y++)
				for (z = '0'; z <= '9'; z++)
				{
					_putchar(w);
					_putchar(x);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
}
