#include "holberton.h"

/**
 *string_toupper - changes all lower to uppercase
 *
 *Return: upper case string
 */

char *string_toupper(char *)
{
	char s[200];
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
	}
	return (0);
}
