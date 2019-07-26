#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *
 *Return: sum or if n==0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list list;


	if (n == 0)
		return (0);

	va_start(list, n);

	sum = i = 0;
	while (i < (int) n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);
	return (sum);
}
