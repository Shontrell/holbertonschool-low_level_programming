#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the listint_t list
 * @n: const int
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
