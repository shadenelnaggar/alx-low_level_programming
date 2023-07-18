#include "main.h"

/**
 * print_alphabet - utilizes the _puthcar function to
 * print alphabets a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
