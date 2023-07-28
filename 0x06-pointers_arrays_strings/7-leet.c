#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string input
 * Return: encoded string into 1337
*/

char *leet(char *s)
{
	char *sp = s;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(k) / sizeof(char); i++)
		{
			if (*s == k[i] || *s == k[i] + 32)
			{
				*s = 48 + val[i];
			}
		}
		s++
	}

	return (sp);
}
