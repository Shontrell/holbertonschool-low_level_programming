#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to listint_t
 * @index: index of the node
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	if (node == NULL)
	{
		return (NULL);
	}
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			return (node);
		}
		head = head->next;
	}
	return (node);
}
