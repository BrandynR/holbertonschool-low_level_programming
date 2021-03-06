#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: array of arguments
 * Return: 0 on success, if not 1
 */
int checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - adds arguments
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success, if not 1
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (checker(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
