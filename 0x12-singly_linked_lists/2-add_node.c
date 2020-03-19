#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string being measured for length
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list_t list
 * @str: pointer to a string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return(NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
