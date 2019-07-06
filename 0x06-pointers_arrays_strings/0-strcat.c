#include "holberton.h"

/**
 *_strcat - concats two strings
 *@dest: s2
 *@src: s1
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
while(*(++src));

while((*(src++) = *(dest++)));

return (dest);
}
