#include "holberton.h"

/**
 *_isalpha - checks for any letter
 *@c: represents a letter
 *Return: 0 for non letter 1 for upper or lowercase
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
