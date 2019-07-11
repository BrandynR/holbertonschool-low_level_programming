#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: 0
 */

int main(void)
{
	int cnt;

	for (cnt = 1; cnt <= 100; cnt++)
	{
		if ((cnt % 3) == 0 && (cnt % 5) != 0)
			printf("Fizz ");
		else if (cnt == 100)
			printf("Buzz");
		else if ((cnt % 5) == 0 && (cnt % 3) != 0)
			printf("Buzz ");
		else if ((cnt % 3) == 0 && (cnt % 3) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", cnt);
	}
	printf("\n");
	return (0);
}
