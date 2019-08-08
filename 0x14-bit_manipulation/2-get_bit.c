#include "holberton.h"

/**
 * get_bit - function description
 * @n: parameter description
 * @index: parameter description
 * Return: return description
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
