#include "holberton.h"

/**
 *rot13 - converts a string to rot13 encryption
 *@s: string to encrypt
 *Return: @s  encrypted string
 */

char *rot13(char *s)
{
	char c, *ret = s;

	for (; (c = *s); s++)
		if ((c >= 'A' && c <= 'Z') ||
		    (c >= 'a' && c <= 'z'))

			*s = (((c & ~(1 << 5)) - 'A' + 13)
			      % 26 + 'A') | (c & 1 << 5);
	return (ret);
}
