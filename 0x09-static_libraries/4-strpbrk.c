#include "main.h"

/**
 * *_strpbrk - a function that searches a string
 * for any of a set of bytes.
 * @s: pointer to string
 * @accept: bytes acc
 * Return: a pointer
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
