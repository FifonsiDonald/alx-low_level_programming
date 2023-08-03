#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *headnode;

	if (head == NULL)
		return;

	while (*head)
	{
		headnode = headnode->next;
		free(*head);
		*head = headnode;
	}
	*head = NULL;
}
