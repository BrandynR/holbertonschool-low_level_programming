#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
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
 * main - minimum number of coins for change
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int cent;
	int coin;

	cent = coin = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (checker(argc, 1, 0, argv) == 0)
		{
			cent = atoi(argv[1]);
			for ( ; cent >= 25; coin++, cent -= 25)
				;
			for ( ; cent >= 10; coin++, cent -= 10)
				;
			for ( ; cent >= 5; coin++, cent -= 5)
				;
			for ( ; cent >= 2; coin++, cent -= 2)
				;
			for ( ; cent >= 1; coin++, cent--)
				;
			printf("%d\n", coin);
		}
	}
	else
		printf("Error\n");
	return (0);
}
