#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: input list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
