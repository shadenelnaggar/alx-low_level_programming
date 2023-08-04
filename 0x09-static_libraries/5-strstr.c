#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *p = needle;

		while (*s == *p && *p != '\0')
		{
			s++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
