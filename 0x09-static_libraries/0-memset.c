#include "holberton.h"
/**
 * _memset - fills memory with constant
 * @s: pointer to s
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
