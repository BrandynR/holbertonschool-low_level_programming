#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - sorts doubly linked list using the Cocktail shaker sort
 * @list: double pointer to head of doubly linked list
 * Return: void
 */

void cocktail_sort_list(listint_t **list)
{
	char swap_node = 1;
	listint_t *temp;

	if (!list || !*list)
		return;
	temp = *list;
	while (swap_node != 0)
	{
		swap_node = 0;
		while (temp->next)
		{
			if (temp->next->n < temp->n)
			{
				my_swap(list, temp);
				swap_node = 1;
				print_list(*list);
			}
			else
				temp = temp->next;
		}
		if (swap_node == 0)
			break;
		swap_node = 0;
		while (temp->prev)
		{
			if (temp->prev->n > temp->n)
			{
				my_swap(list, temp->prev);
				swap_node = 1;
				print_list(*list);
			}
			else
				temp = temp->prev;
		}
	}
}

/**
 * my_swap - swaps a node in doubly linked list with next node in the list
 * @list: double pointer to head of list
 * @node: node to swap
 * Return: void
 */

void my_swap(listint_t **list, listint_t *node)
{
	node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	else
		*list = node->next;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}
