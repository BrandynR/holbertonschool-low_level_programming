#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: sum of tow numbers
 */

int main(int argc, char **argv)
{
	int sum, value, i;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		sum += value;
	}
	printf("%d\n", sum);
	return (0);
}
