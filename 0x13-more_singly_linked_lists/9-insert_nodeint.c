#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head:
 * @idx:
 * @n:
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hold = *head, *insert = malloc(sizeof(listint_t));
	unsigned int i;

	insert->n = n;
	if (insert == NULL)
	{
		free(insert);
		return(NULL);
	}
	if (idx == 1)
	{
		insert->next = *head;
		*head = insert;
	}
	for (i = 0; i < (idx - 1); i++)
	{
		hold = hold->next;
	}
	insert->next = hold->next;
	hold->next = insert;
	return (insert);
}
