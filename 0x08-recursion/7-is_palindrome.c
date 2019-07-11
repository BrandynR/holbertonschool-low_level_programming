#include "holberton.h"
/**
 *palin_check - checks for palindrome
 *@s: string
 *@i: integer for count
 *@length: length
 *Return: 1, 0, or palin check
 */

int palin_check(char *s, int i, int length)
{
	if (s[i] == s[length] && length != i)
		return (palin_check(s, --length, ++i));
	if (s[i] == s[length] || i <= length)
		return (1);
	if (s[i] != s[length])
		return (0);
	return (1);
}

/**
 * recurlen - checks string recursively
 * @s: string
 * @i: integer to count
 * Return: length
 */
int recurlen(char *s, int i)
{
	if (s[i] != '\0')
		return (recurlen(s, ++i));
	return (--i);
}

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = recurlen(s, 0);
	return (palin_check(s, len, 0));
}
