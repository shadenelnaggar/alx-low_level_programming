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
	int tot = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", tot);
	return (0);
}
