#include "holberton.h"

/**
 *_isupper - Checks for upper case letter
 *@c: represents a letter
 *Return: 1 c is uppercase, 0 if lowercase
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	else
	return (0);
}
