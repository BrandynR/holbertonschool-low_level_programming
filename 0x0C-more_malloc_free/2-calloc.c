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
	unsigned int loop;

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (loop = 0; loop < nmemb * size; loop++)
	{
		((char *)ptr)[loop] = 0;
	}

	return (ptr);
}
