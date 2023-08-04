#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: num of line arguments
 * @argv: pointer to an array of command line args
 * Return: 0 on success
*/

int main(int argc, char *argv[] __attrivute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
