#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name:  name to print
 * @f: function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
