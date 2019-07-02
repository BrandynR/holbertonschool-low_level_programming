#include "holberton.h"

/**
 *swap_int - swaps the values of two integers
 *@a: integer
 *@b: integer
 *@temp: temporary place holder for integer
 *Return:void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *b;
*b = *a;
*a = temp;
}
