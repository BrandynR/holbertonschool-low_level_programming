#include "holberton.h"

/**
 *main - checks for any letter
 *
 *Return: 0 for non letter 1 forupper or lowercase
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
		return (1);
		else
			return (0);
	}
}
