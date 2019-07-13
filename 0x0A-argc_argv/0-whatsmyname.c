#include <stdio.h>
/**
 *main - prints program name
 *@argc: argument count
 *@argv: array of arguments
 *Return: program name
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		argv[0] = argv[4];
		printf("%s\n", argv[0]);
	}
	return (0);
}
