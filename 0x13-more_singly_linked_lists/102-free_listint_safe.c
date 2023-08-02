#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *node;

	if (!h || !*h)
		return (0);


	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
