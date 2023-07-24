#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Desription: generates a random password for 101-crackme
 * Return: 0
*/

int main(void)
{
	int tot, x;

	srand(time(NULL));
	while (tot < 2645)
	{
		x = rand() % 128;
		tot += x;
		putchar(x);
	}

	putchar(2772 - tot);

	return (0);
}
