#include "main.h"

/**
 * isLower - checks if ASCII is lowercase
 * @c: character input
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimeter - checks if ASCII is delimeter
 * @c: character input
 * Return: 1 if true, 0 if false
*/

int isDelimeter(char c)
{
	int i;
	char del[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string input
 * Return: capitalized string
*/

char *cap_string(char *s)
{
	char *p = s;
	int fd = 1;

	while (*s)
	{
		if (id(*s))
			fd = 1;
		else if (il(*s) && fd)
		{
			*s -= 32;
			fd = 0;
		}
		else
			fd = 0;
		s++;
	}

	return (p);
}
