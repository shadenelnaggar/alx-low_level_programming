#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: values
 * @max: values
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, sz;

	if (min > max)
		return (NULL);

	sz = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
