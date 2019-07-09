#include "holberton.h"
/**
 *_memset - .
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
