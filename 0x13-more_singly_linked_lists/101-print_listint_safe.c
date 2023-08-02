#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count;

	if (head == NULL)
		return (0);

	tortoise = head;
	hare = head;
	count = 0;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
	}

	return (count);
}

