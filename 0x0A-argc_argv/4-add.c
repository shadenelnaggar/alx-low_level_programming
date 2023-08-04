#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: an integer
 * @argv: a list of commands
 * Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int i, n, tot = 0;
	char *ch;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*ch)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			tot += n;
		}
	}
	printf("%d\n", tot);

	return (0);
}
