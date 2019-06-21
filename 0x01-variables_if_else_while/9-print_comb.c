#include <stdio.h>

/**
 *main - single digit number combos
 *
 *Return: All possible number combos
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 9)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('9');
		}
	}
	putchar('\n');

return (0);
}
