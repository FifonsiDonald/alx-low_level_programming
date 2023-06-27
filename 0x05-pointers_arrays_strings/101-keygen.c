#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randpass;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		randpass = (rand() % 125) + 1;
		printf("%c", randpass);
		total -= randpass;
	}
	printf("%c", total);

	return (0);
}
