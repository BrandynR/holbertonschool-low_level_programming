#include "holberton.h"

/**
 *print_alphabet_x10 - printing the alpabet 10 times
 *
 *Return:Always 0  Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar('x');
			for (x <= '9'; x++)
			{
				_putchar('\n');
			}
	}
}
