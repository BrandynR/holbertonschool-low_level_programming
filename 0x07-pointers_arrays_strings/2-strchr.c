#include "holberton.h"

/**
 *_strchr - locates a character in string
 *@s: string to be searched
 *@c: character
 *Return: pointer to character, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
