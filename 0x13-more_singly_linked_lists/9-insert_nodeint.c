#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: - double pointer to the head of linked list.
 * @idx: index.
 * @n: integer n.
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *h;

	if (idx != 0)
	{
		for (i = 0; i < idx && head != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = h->next;
		h->next = newnode;
	}
	return (newnode);
}
