#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to search for
 * Return: first occurence of character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
