#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: an integer
 * @argv: a list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
