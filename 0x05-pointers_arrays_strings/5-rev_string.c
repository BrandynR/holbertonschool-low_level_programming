#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: string
 *Return: void
 */

void rev_string(char *s)
{
int str_len(char *);
int len, c;
char *begin, *end, temp;

len = str_len(s);
begin = s;
end = s;

for (c = 0; c < len - 1; c++)
{
	end++;
}
for (c = 0; c < len / 2; c++)
{
	temp = *end;
	*end = *begin;
	*begin = temp;

	begin++;
	end--;
}
}

int str_len(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
return (c);
}
