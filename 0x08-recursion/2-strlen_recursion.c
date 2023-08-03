#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: pointer to input string
 * Return: an int (length of string)
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s > '\0')
	{
		counter = counter + _strlen_recursion(s + 1) + 1;
	}

	return (cunter);
}
