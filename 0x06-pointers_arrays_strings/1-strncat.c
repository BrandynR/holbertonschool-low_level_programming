#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: variable
 *Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++, n;
	}
	*dest = n;
	return (dest);
}
