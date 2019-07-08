#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int count = 1, divide = 1;

	while (divide <= n / 10)
	{
		divide *= 10;
		count++;
	}
	while (count > 0)
	{
		_putchar((n / divide) + '0');
		n %= divide;
		divide /= 10;
		count--;
	}
}
