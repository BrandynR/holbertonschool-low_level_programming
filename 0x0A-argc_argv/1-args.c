#include <stdio.h>
/**
 *main - prints number od arguments
 *@argc:argument count
 *@argv:array of arguments
 *Return:number of arguments
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
