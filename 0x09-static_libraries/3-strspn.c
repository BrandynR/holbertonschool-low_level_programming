#include "holberton.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: segment
 * @accept: string of bytes to compare
 * Return: number of bytes in segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
