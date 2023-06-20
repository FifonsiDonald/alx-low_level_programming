#include <stdio.h>
#include <unistd.h>
#include "main.h"

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	print_putchar();
	return (0);
}
/**
 * print_putchar - prints putchar
 */
void print_putchar(void)
{
	printf("_putchar\n");
}

