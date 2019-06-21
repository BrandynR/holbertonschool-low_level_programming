#include <stdio.h>

/**
 *main - putchar and reverse funtion
 *
 *Return: Alphabet printed backwards
 */

int main(void)
{
int x;
for (x = 'z'; 'a' <= x; x--)
putchar(x);
putchar('\n');
return (0);
}
