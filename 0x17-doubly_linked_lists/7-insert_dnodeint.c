#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to dlistint_t
 * @idx: index of the list where new node should be added
 * @n: value of node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold, *insert;
	unsigned int i;

	hold = *h;
	insert = malloc(sizeof(dlistint_t));
	insert->n = n;
	if (insert == NULL)
	{
		free(insert);
		return (NULL);
	}
	if (idx == 0)
	{
		insert->next = *h;
		*h = insert;
	}
	if (hold != NULL)
	{
		for (i = 0; i < idx - 1; i++)
		{
			hold = hold->next;
		}
		insert->next = hold->next;
		hold->next = insert;
	}
	return (insert);
}
