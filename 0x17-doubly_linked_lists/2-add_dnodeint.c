#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the dlistint_t list
 * @n: const int
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
