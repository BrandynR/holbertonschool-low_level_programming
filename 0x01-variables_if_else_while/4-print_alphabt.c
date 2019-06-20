#include <stdio.h>

/**
 *main - Letters of the alphabet
 *
 * Return: alpahbet withour q and e
 */

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'q' && x != 'e')
putchar(x);
putchar('\n');
return (0);
}
