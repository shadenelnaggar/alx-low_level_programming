#include "main.h"

/**
 * puts_half -  a function that prints the second half of a string
 * followed by a new line
 *
 * @str: a string input
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
