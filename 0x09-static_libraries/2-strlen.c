#include "main.h"

/**
 * _strlen - a function that returns the length
 * of a given string
 *
 * @s: an input of type char as a string
 *
 * Return: length of string s
*/

int _strlen(char *s)
{
	int ctr;

	for (ctr = 0; *s != '\0'; s++)
	{
		ctr++;
	}

	return (ctr);
}
