#include "holberton.h"

/**
 *_strncmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *@b: unsigned int
 *Return: pointer to beginning, or NULL
 */

int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int j;

	for (j = 0; j <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; j++)
	{
		s1++;
		s2++;
	}
	return (j - b);
}

/**
 *_strstr - locates a sub string
 *@haystack: string to be searched
 *@needle: substring to search for
 *Return: haystack, or 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;

	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
