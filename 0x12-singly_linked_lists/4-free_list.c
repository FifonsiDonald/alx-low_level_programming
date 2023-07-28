#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *free_list -  frees a list_t list
 *@head: first element of list
 *Return: void
 */
void free_list(list_t *head)
{
		list_t *prev;

	prev = NULL;
	while (head)
	{
		free(head->str);
		prev = head;
		head = head->next;
		free(prev);
	}
}
