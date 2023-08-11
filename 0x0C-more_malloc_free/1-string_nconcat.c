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

	if (n >= l2)
		n = l2;

	unsigned int tot = l1 + n + 1;
	char *result = (char *)malloc(tot * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (unsigned int i = 0; i < l1; i++)
		result[i] = s1[i];

	for (unsigned int i = 0; i < n; i++)
		result[l1 + i] = s2[i];

	result[tot - 1] = '\0';

	return (result);
}
