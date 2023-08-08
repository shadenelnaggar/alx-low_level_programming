#include "main.h"

/**
 * char *_strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string input
 * Return: a pointer to the duplicated string, NULL if insuff memory
*/

char *_strdup(char *str)
{
	int itr = 0, s = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	;

	n = malloc(s * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; itr < s; itr++)
			n[itr] = str[itr];
	}

	return (n);
}
