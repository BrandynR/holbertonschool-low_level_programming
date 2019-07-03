#include "holberton.h"
/**
 *puts_half - prints the second half of a string
 *@str: string
 *Return: void
 */

void puts_half(char *str)
{
int i;
int len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 1)
{
for (i = 0; i < len; i++)
{
if (i > (len - 1) / 2)
{
  _putchar(str[i]);
}
}
}
else
{
for (i = 0; i < len; i++)
{
if (i >= len / 2)
{
_putchar(str[i]);
}
}
}
_putchar('\n');
}
