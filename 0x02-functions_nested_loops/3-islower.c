#include "holberton.h"

/**
 *int _islower(int c) - checks for lower case letter
 *
 *Return: 0 for uppercase 1 for lowercase
 */

int _islower(int c);
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
