#include "holberton.h"
/**
 *_memset - .
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of bytes
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
