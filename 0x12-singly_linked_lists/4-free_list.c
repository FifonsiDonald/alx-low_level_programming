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
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
