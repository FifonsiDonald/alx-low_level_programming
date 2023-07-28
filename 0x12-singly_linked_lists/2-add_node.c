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
	list_t *addnode;

	addnode = malloc(sizeof(list_t));
	if (addnode == NULL)
		return (NULL);
	addnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	addnode->len = i;
	addnode->next = *head;
	*head = addnode;
	return (addnode);
}
