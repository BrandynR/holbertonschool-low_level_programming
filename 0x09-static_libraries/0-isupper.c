#include "holberton.h"
/**
 * _isupper - checks for uppercase
 * @c:letter to check for case
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
