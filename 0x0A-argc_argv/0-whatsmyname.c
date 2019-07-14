#include <stdio.h>
/**
 *main - prints program name
 *@argc: argument count
 *@argv: array of arguments
 *Return: program name
 */

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
