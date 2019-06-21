#include <stdio.h>

/**
 *main - Printing a to z
 *
 *Return:Alphabet a to z lower case
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
