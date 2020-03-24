#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list, returns head node’s data
 * @head: pointer to a pointer to a listint_t list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int x = 0;

	if (*head == NULL || head == NULL)
	{
		return (x);
	}
	hold = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(hold);
	return (x);
}
