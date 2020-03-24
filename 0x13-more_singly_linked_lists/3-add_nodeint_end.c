#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the head of the listint_t list
 * @n: const int
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (node = *head; node->next != NULL;)
			node = node->next;
		new->next = node->next;
		node->next = new;
	}
	return (*head);
}
