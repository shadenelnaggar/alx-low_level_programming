#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: array of integers (matrix)
 * @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int i, c1, c2;

	for (i = 0; i < size; i++)
	{
		c1 += a[i];
		c2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
