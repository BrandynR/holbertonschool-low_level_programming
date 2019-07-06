#include "holberton.h"

/**
 *_strcmp - funtion to compare two strings
 *@s1: string 1
 *@s2: string 2
 *Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (-15);
}
