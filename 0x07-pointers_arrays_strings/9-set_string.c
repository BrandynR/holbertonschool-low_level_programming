#include "holberton.h"

/**
 *set_string - sets value of pointer to a char
 *
 *Return: void
 */

void set_string(char **s, char *to)
{
        **s = *to;
}
