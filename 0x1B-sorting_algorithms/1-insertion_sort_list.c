#include "sort.h"

/**
 * insertion_sort_list - insertion sorts a list
 * @list: head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	unsigned int i;

	if (!list || !(*list))
		return;
	if (list_length(list) <= 1)
		return;
	for (i = 1; temp; i++)
	{
		temp = from_index(list, i);
		if (temp && temp->n < (temp->prev)->n)
		{
			list_swap(list, i);
			print_list(*list);
			i = 0;
		}
	}
}

/**
 * from_index - grabs a node at a specific index
 * @list: list to grab from
 * @index: index to grab at
 * Return: returns a pointer to the node specified
 */
listint_t *from_index(listint_t **list, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = *list;
	for (i = 0; temp != NULL && i != index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}

/**
 * list_swap - swaps a node with the previous node
 * @list: list to work from
 * @index: index to swap at
 * Return: returns 1 on success
 */
unsigned int list_swap(listint_t **list, unsigned int index)
{
	listint_t *at_index, *temp;

	at_index = from_index(list, index);
	temp = at_index->prev;

	temp->next = at_index->next;
	at_index->prev = temp->prev;
	temp->prev = at_index;
	at_index->next = temp;
	if (at_index->prev != NULL)
		(at_index->prev)->next = at_index;
	if (temp->next != NULL)
		(temp->next)->prev = temp;
	if (index == 1)
	{
		*list = at_index;
	}
	return (1);
}

/**
 * list_length - returns length of a linked list
 * @list: head of list
 * Return: Returns length of linked list
 */
unsigned int list_length(listint_t **list)
{
	listint_t *temp;
	unsigned int i;

	temp = *list;

	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/**
 * rev_list - prints a list backwards, for testing
 * @list: head of list
 * Return: 1 on success
 */
unsigned int rev_list(listint_t **list)
{
	listint_t *temp;

	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL)
	{
		printf("%d, ", temp->n);
		temp = temp->prev;
	}
	return (1);
}
