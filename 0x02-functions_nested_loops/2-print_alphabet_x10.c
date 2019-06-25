#include "holberton.h"

/**
 *print_alphabet_x10 - printing the alphabet 10 times
 *
 *Return:Always 0  Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (y = '0'; y <= '9'; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
}
