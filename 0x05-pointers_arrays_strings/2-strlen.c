#include "holberton.h"

/**
 *_strlen -  finds the length of a string
 *@s: the string of whose length we will find
 *Return: Always 'c'
 */

int _strlen(char *s)
{
int c = 0;

while (*s != '\0')
{
c++;
s++;
}
return (c);
}
