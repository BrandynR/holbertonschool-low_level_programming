#include <stdio.h>
#include <unistd.h>

/**
 *main - printing to stderr
 *
 *Return: print a line without using printf or puts
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
