#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	head = NULL;
	while (head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
