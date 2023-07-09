#include <stdio.h>
/**
 * main - prints arguments received
 * @argv: array that contains the program command line arguments.
 * @argc:number of command line arguments.
 * Return: 0 after success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
