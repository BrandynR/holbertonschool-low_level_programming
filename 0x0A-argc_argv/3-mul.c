#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: result of muliplication
 */

int main(int argc, char **argv)
{
	int num1, num2, mult;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
	}
	return (0);
}
