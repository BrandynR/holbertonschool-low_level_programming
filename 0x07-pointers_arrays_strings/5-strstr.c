#include "holberton.h"

/**
 *_strstr - locates a substring
 *@haystack: string to be searched
 *@needle: substring to search for
 *Return: pointer to beginning, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return (0);
}
