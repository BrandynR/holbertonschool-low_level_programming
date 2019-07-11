#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 *
 * Return:0;
 */

int main(void)
{
	int i, j, sum;
	char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pass[100];

	srand(time(NULL));
	sum = 0;
	i = 0;
	while (sum < (2772 - 122))
	{
		j = rand() % 62;
		pass[i] = array[j];
		sum = sum + pass[i];
		i++;
	}
	j = 2772 - sum;
	password[i] = j;
	i++;
	pass[i] = '\0';
	printf("%s", pass);
	return (0);
}
