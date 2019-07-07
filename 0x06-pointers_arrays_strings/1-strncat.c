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
	while (*src)
	{
		src++;
	}
	while (*dest)
	{
		*src = *dest, n;
		src++;
		dest++;
	}
	*src = '\0';
	return (dest);
}
