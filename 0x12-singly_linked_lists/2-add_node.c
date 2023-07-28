#include <stdio.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to first node
 * @str: string argument
 * Return: returns the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
