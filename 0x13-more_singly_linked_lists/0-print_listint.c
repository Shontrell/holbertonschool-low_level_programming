#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node;

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
