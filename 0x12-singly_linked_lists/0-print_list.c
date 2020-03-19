#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node, nolen = 0;
	char *nil = "(nil)";

	if (h == NULL)
	{
		return (0);
	}
	for (node = 0; h != NULL; node++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", nolen, nil);
		}
		h = h->next;
	}
	return (node);
}
