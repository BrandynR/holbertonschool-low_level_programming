#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of
 * number 612852475143
 *
 * Return: 0
 */


int main(void)
{
	long d, lrg_num;
	long num;

	num = 612852475143;
	for (d = 2; d < sqrt(num); d++)
	{
		if ((num % d) == 0)
		{
			lrg_num = d;
			num = num / d;
			d = 1;
		}
	}
	lrg_num = num;
	printf("%ld\n", lrg_num);
	return (0);

}
