#include "main.h"

/**
 * strlen - determines the length of the string
 * @str: string input
 * Return: the length of the string
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
 * Return: pointer to string
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *n;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	sz1 = strlen(s1);
	sz2 = strlen(s2);
	n = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i <= (sz1 + sz2); i++)
	{
		if (i < sz1)
		{
			n[i] = s1[i];
		}
		else
		{
			n[i] = s2[i - sz1];
		}
	}
	n[i] = '\0';
	return (n);
}
