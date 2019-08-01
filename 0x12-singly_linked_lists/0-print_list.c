#include "lists.h"

/**
 * print_list - returns number of elements in linked list
 *
 * @h: head of const list being counted
 * Return: returns number of elements in list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
