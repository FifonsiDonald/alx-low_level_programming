#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name:  name to print
 * @f: function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
