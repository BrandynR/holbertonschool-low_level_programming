#inlcude <stdio.h>
/**
 *main -
 *
 *Return:
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
		printf("%s\n", argv[i++]);
	return (0);
}
