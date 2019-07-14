#include "holberton.h"
/**
 * _abs - calculate the absolute value of the number
 * @i: integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
