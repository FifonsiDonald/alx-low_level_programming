#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1 = head;
	listint_t *temp2 = head;

	if (!head)
		return (NULL);

	while (temp1 && temp2 && temp2->next)
	{
		temp2 = temp2->next->next;
		temp1 = temp1->next;
		if (temp2 == temp1)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp2);
		}
	}
	return (NULL);
}

