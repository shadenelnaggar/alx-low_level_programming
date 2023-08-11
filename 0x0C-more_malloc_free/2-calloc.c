#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: size bytes
 * @size: number of size
 * Return:  pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		x[i] = 0;

	return (x);

}
