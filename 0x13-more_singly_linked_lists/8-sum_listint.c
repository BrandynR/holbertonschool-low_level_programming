#include "lists.h"

/**
 * sum_listint - returns the sum of all nodes in a listint_t struct
 *
 * @head: head for listint_t struct
 * Return: returns the sum of all data, or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum;

	if (temp == NULL)
		return (0);
	sum = 0;
	data = temp;
	while (data != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
