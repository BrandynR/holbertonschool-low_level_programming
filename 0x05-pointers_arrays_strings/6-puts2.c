#include "holberton.h"
/**
 *puts2 - prints 1 out of 2 characters
 *@str: string
 *Return: void
 */

void puts2(char *str)
{
int len;

for (len = 0; str[len] != '\0'; len++)
{
if (len % 2 == 0)
{
	_putchar(str[len]);
}
}
_putchar('\n');
}
