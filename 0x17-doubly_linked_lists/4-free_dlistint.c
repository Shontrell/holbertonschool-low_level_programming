#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
