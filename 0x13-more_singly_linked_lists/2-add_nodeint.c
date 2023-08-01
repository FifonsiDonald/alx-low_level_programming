#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer to listint_t
 * @n: number of elements in listint_t
 * Return: address of the new element if ran else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node)
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	free(n_node);
	return (NULL);
}
