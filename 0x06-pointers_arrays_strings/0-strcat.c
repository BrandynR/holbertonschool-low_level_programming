#inlcude "holberton.h"

/**
 *_strcat - concats two strings
 *
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
	char string1[], s;
	int i = 0, j = 0;

while (string1[i] != '\0')
{
	dest[i] = string1[i];
	i++;
}

while (src[j] != '\0')
{
	dest[i] = src[j];
		i++;
		j++;
}
		dest[i] = '\0';
