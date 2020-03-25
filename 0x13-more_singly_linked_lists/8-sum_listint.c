#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to listint_t
 * Return: sum of all the data (n) of listint_t
 */
int sum_listint(listint_t *head)
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
