#include "holberton.h"

/**
 *_abs - prints absolute value
 *@x: represents absolute value
 *Return:Always 0
 */

int _abs(int x)
{
int y;

if (x < 0)
{
	(y = x * -1);
	return (y);
}

else
	return (x);
}
