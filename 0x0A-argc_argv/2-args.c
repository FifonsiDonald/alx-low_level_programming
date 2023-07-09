#include <stdio.h>
/**
 * main - prints arguments received
 * @argv: array that contains the program command line arguments.
 * @argc:number of command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
