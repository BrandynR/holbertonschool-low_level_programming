#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned int memory size to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
