#include <stdio.h>

/**
 *main - Printing a to z
 *
 *Return:Alphabet a to z lower case
 */

int main(void)
{
int x, y;

for (x = 'a'; x <= 'z'; x++)
putchar(x);

for (y = 'A'; y <= 'Z'; y++)
putchar(y);
putchar('\n');

return (0);
}
