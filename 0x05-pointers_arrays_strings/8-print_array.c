#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line.
 *
 * @n: number of elements of the array to be printed
 * @a: string input
 *
 * Return: None
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
