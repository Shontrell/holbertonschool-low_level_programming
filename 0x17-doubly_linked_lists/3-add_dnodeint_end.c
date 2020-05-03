#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the dlistint_t list
 * @n: const int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	for (node = *head; node->next != NULL;)
		node = node->next;
	new->next = node->next;
	new->prev = node;
	node->next = new;
	return (node->next);
}
