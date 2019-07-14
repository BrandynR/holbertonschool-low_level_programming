#include "holberton.h"
/**
 * _islower - checks to see is letter is lowercase
 * @c: character to check
 * Return: 1 if lowercase letter, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
