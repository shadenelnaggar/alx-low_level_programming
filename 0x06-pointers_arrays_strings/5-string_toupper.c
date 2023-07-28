#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @s: string input
 * Return: reversed string
*/

char *string_toupper(char *s)
{
	int i = 0;

	for (i; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
