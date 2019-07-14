#inlcude <stdio.h>
/**
 *main -prints arguments it recieves
 *@argc:argument count
 *@argv:array of arguments
 *Return: all arguments
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
