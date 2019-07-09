#include "holberton.h"
/**
 *_strpbrk - searches string for set of bytes
 *@s: string
 *@accept: bytes
 *Return: pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;
	while (*s != '\0')
	{
		for (j = 0; accept[j] ! = '\0'; j++)
			if (*s == accept[j])
				return (s);
		s++;
	}
	return (0);
}
