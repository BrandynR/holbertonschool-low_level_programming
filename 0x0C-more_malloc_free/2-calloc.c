#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - mallocs assigned memory and sets to zero
 *
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *spc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	spc = malloc(nmemb * size);
	if (spc == NULL)
		return (NULL);
	for (i = 0; i != size; i++)
		*(spc + (size * i)) = 0;
	return (spc);
}
