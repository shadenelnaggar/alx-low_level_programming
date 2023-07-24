#include "main.h"

/**
 * _puts - a function that prints a string, followed by a
 * new line, to stdout
 *
 * @str: a string input of type char
 *
 * Return: None
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
