#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node;

	if (h == NULL)
	{
		return (0);
	}
	for (node = 0; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
