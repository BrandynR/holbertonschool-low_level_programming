#include "holberton.h"

/**
 *int _isalpha(int c) - checks for any letter
 *
 *Return: 0 for non letter 1 for upper or lowercase
 */

int _isalpha(int c)
{
	int x;

	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else if (x >= 'A' && x <= 'Z')
	{
		return (1);
		else
			return (0);
	}
}
