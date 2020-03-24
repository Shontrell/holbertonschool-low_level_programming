#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int node;

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
