#include "holberton.h"

/**
 * factorial - factorial of a number
 * @n: number
 * Return: -1 for error
 */
int factorial(int n)
{
	int f;

	f = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}
