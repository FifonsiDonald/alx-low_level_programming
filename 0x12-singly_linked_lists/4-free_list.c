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
	struct list_s *tmp = NULL;
	struct list_s *a =  NULL;

	temp = head;
	while (temp != NULL)
	{
		a = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = a;
	}
	head = NULL;
}
