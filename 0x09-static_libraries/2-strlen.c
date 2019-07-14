#include "holberton.h"
/**
 * _strlen - calculates length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
