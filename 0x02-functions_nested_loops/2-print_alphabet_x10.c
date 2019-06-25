#include "holberton.h"

/**
 *main - _putchar function
 *
 *Return:Always 0  Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x < 10; x++)
	{
		_putchar(x);
		_putchar('\n');
	}
}
