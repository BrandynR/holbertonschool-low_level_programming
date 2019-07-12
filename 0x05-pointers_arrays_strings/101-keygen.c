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
	char pass[100];
	int ran, num, i;

	num = 0;
	i = 0;
	srand(time(NULL));
	while (num < 2645)
	{
		ran = random() % 127;
		if (ran > 32)
		{
			pass[i++] = randNum;
			num += ran;
		}
	}
	pass[i++] = (2772 - num);
	pass[i] = '\0';
	printf("%s", pass);

	return (0);
}
