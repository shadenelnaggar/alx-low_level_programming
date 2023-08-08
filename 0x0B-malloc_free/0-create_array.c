#include "main.h"

/**
 * char *create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char tp initialize the array wit
 * Return:pinter to the array
*/

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (s == 0 || size == 0)
	{
		return (0);
	}

	while (size--)
	{
		s[size] = c;
	}

	return (s);
}
