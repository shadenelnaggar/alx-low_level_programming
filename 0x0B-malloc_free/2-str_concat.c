#include "main.h"

/**
 * strlen - determining the length of a string
 * @str: string input
 * Return: length of string (int)
*/

int strlen(char *str)
{
	int s = 0;

	for (; str[s] != '\0'; s++)
	;

	return (s);
}

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to s1, s2 and null
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, itr;
	char *n;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	sz1 = strlen(s1);
	sz2 = strlen(s2);
	n = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (n == 0)
	{
		return (0);
	}

	for (itr = 0; itr <= sz1 + sz2; itr++)
	{
		if (itr < sz1)
		{
			n[itr] = s1[itr];
		}
		else
		{
			n[itr] = s2[itr - sz1];
		}
	}
	n[itr] = '\0';
	return (n);
}
