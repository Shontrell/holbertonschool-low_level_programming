#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to listint_t
 * @idx: index of the list where new node should be added
 * @n: value of node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hold, *insert;
	unsigned int i;

	hold = *head;
	insert = malloc(sizeof(listint_t));
	insert->n = n;
	if (insert == NULL)
	{
		free(insert);
		return (NULL);
	}
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	if (hold != NULL)
	{
		for (i = 0;i < idx - 1; i++)
		{
			hold = hold->next;
		}
	insert->next = hold->next;
	hold->next = insert;
	}
	return (insert);
}
