#include "holberton.h"

/**
 *jack_bauer - prints each minute of the day
 *
 *Return: Always 0
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w  = 0; w <= 2; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (w == 2 && x > 3)
					{
						break;
					}
					else
					{
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
					}
				}
			}
		}

	}
}
