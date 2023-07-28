#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a node at the end of the  lis_t list.
 * @head: Address of first element of the list
 * @str: pointer to string we want to print
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	current = *head;

	if (current != NULL)
	{
		while (current->next != 0)
		{
			current = current->next;
		}
		current->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
