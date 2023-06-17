#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
                putchar(letter);
        }
	for (letter = 'A'; letter <= 'Z'; letter++)
        {
                putchar(letter);
        }
	putchar('\n');
        return (0);
}
