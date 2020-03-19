#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int element;

	if (h == NULL)
	{
		return (0);
	}
	for (element = 0; h != NULL; element++)
	{
		h = h->next;
	}
	return (element);
}
