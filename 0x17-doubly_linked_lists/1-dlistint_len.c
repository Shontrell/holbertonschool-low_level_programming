#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to a dlistint_t list
 * Return: number of nodes in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	if (h == NULL)
	{
		return (0);
	}
	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}
	return (node);
}
