#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: an integer
 * @args: a list of commands
 * Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int tot;

	if (argc == 3)
	{
		tot = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", tot);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
