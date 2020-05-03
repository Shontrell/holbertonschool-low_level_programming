#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to dlistint_t
 * @index: index of the node
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	if (node == NULL)
	{
		return (NULL);
	}
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			break;
			return (node);
		}
		node = node->next;
	}
	return (node);
}
