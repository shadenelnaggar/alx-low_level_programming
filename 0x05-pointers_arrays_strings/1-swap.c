#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using their pointers as parameters
 *
 * @a: first input of type integer
 * @b: second input of type integer
 *
 * Return: None
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
