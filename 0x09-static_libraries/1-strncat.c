#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes from src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int ctr, i;

	ctr = 0;
	while (dest[ctr])
		ctr++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ctr + i] = src[i];

	dest[ctr + i] = '\0';

	return (dest);
}
