#include <stdio.h>
#include "lists.h"

/**
 * callfirst - print elements beforme main
 *
 * Return: no return
 */
void __attribute__((constructor)) callfirst()
{

	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
