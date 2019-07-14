#include <stdio.h>
/**
 *main - prints program name
 *@argc: argument count
 *@argv: array of arguments
 *Return: program name
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
