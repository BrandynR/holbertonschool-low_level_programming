#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */

int main(int argc, char *argv[])
{
	int numbytes, cnt;
	unsigned char *p;

/** Checks argument count */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

/** Converts argument to integer */
	numbytes = atoi(argv[1]);
	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
/** Initialize p and cnt variable */
	p = (unsigned char *)main;
	cnt = 0;
/** While count is less than number of bytes minus null print and increment*/
	if (numbytes > 0)
	{
		while (cnt < (numbytes - 1))
			printf("%02hx ", p[cnt++]);
		printf("%hx\n", p[cnt]);
	}
	return (0);
}
