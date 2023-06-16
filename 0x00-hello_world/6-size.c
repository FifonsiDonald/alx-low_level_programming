#include <stdio.h>

/**
 * main -Entry point for my program
 *
 * my program prints out the size of various computer types it is run on
 * Return: Always return 0 (success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a double: %zu byte(s)\n", sizeof(double));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));

return (0);
}
