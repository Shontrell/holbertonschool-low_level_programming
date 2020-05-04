#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of dlistint_t
 * @head: pointer to a pointer to dlistint_t
 * @index: index of the node that should be deleted
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dnode = *head, *hold;
	unsigned int i;

	if (dnode == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = dnode->next;
		free(dnode);
		return (1);
	}
	for (i = 0; dnode != NULL && i < index - 1; i++)
	{
		dnode = dnode->next;
	}
	hold = dnode->next->next;
	free(dnode->next);
	dnode->next = hold;
	return (1);
}
