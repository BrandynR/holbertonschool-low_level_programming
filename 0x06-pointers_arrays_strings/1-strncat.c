#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: variable
 *Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
