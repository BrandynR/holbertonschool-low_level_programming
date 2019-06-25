#include "holberton.h"

/**
 *main - _putchar function
 *
 *Return:Always 0  Prints the alphabet 10 times
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x<10; x++)
	{
		_putchar(x);
		_putchar('\n');
	}
	return (0);
}
