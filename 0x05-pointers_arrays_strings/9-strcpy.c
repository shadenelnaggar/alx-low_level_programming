#include "main.h"

/**
 * *_strcpy -  a function that copies the string pointed to by src
 * including (\0), to the buffer pointed to by dest
 *
 * @dest: an input string of type char
 * @src: an input string of type char
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
