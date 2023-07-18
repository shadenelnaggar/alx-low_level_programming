#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet_x10 - function that prints
 * the alphabet 10 times
 *
 * Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 0; l <= 9; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
