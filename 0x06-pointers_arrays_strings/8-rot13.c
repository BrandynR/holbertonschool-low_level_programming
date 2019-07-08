#include "holberton.h"

/**
 *rot13 - converts a string to rot13 encryption
 *@s: string to encrypt
 *Return: encrypted string
 */

char *rot13(char *i)
{
	int i;

	i = 0;


	if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = (s[i] + 13);
		}
	while ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] = (s[i] - 13);
			}
		i++;

	return (s);
}
