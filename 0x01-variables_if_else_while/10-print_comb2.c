#include <stdio.h>
/**
 *main - program to print numbers from 00 to 99
 *
 *Return: listed numbers folloed by a comma and space
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{

		for (y = '0'; y <= '9'; y++)
		{
		putchar(x);
		putchar(y);

		if (x != '9' || y != '9')
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

return (0);
}
