#include "holberton.h"

/**
 *main - checks for lower case letter
 *
 *Return: 0 for uppercase 1 for lowercase
 */

int main(void)
{
	int x;
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else if (x >= 'A' && x <= 'Z')
	{
		return (0);
	}
}
