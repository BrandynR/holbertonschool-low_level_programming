#include "holberton.h"

/**
 *print_rev - prints a string in reverse
 *@s: the string to be printed in reverse
 *Return: void
 */

void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

 for (; (len = '\0' - 1); len--)

_putchar(len);
_putchar('\n');
}
