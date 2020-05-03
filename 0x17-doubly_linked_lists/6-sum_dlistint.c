#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: pointer to dlistint_t
 * Return: sum of all the data (n) of dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int node, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (node = 0; head != NULL; node++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
