#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: pointer for destination input
 * @src: pointer for source input
 * Return: pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int ctr1, ctr2;

	ctr1 = 0;
	while (dest[ctr1])
		ctr1++;

	for (ctr2 = 0; src[ctr2]; ctr2++)
		dest[ctr1++] = src[ctr2];

	return (dest);
}
