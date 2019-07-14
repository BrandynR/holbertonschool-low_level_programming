#include "holberton.h"
/**
 * *_strcpy - copies string to a buffer
 * @dest: string
 * @src: buffer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
