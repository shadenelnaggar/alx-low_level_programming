#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: size of type integer
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}

	return (s);
}
