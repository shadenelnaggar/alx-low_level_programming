#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 *
 * @s: a string input of type char
 *
 * Return: none
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
