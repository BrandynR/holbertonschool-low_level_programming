#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - prints int up to 98
 *@n: Represents the starting point number
 *Return:no return void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		(n++);
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");

		(n--);
	}
	if (n == 98)
	{
		printf("98");
	}
}
