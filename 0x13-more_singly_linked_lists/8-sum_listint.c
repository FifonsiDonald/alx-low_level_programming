#include "lists.h"
/**
 * sum_listint -  returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head of linked list.
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int node_sum;
	
	node_sum = 0;
	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}
