#include <stdio.h>
/**
 * main - prints name
 * @argc: number of command lne arguments
 * @argv: array of cmd line argumets.
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
