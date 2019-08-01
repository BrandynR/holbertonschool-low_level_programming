#include "lists.h"

/**
 * print_list - returns number of elements in linked list
 *
 * @h: head of const list being counted
 * Return: returns number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
