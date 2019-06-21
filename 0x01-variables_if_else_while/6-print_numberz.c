#include <stdio.h>

/**
 *main - print base 10 digits
 *
 *Return: 0 to 9
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)

putchar(x);

putchar('\n');
return (0);
}
