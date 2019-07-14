#include "holberton.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string
 * @accept: bytes to search for
 * Return: matching bytes, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
