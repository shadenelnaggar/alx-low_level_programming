#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: number of bytes of s2
 * Return: pointer to a newly allocated space in memory which contains s1
 * followed by the first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int l1 = 0;
	unsigned int l2 = 0;

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	char *result = malloc(l1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		result[j] = s2[j];
		i++;
	}

	result[i] = '\0';

	return (result);
}
