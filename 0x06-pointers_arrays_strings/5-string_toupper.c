#include "holberton.h"

/**
 *string_toupper - changes all lower to uppercase
 *
 *Return: upper case string
 */

char *string_toupper(char *str)
{
	int i = 0;

	if (*(str + i) >= 97 && *(str + i) <= 122)
	{
		*(str + i) = *(str + i) - 32;
	}
i++;
return (0);
}
