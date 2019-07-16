#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	char *empty;
	int i, j, k;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;

	string = malloc((i + j) * sizeof(*str));
	if (string == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	j = 0;
	while (s2[j] != '\0')
	{
		string[k] = s2[j];
		j++;
		k++;
	}
	string[k] = '\0';
	return (string);
}
