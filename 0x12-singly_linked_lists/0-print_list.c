#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to location in list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	
	i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("%s\n", "[0] (nil)");
		i++;
		h = h->next;
	}
	return (i);
}
