#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: pointer for the constant
 * @b: the constant
 * @n: maximum bytes
 * Return: @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0l i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
