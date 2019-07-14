#inlcude <stdio.h>
/**
 *main -prints arguments it recieves
 *@argc:argument count
 *@argv:array of arguments
 *Return: all arguments
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
		printf("%s\n", argv[i++]);
	return (0);
}
