#include "lists.h"


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = neew_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
