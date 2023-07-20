#include "main.h"

/**
 * print_numbers - prints digits from 0 - 9 using _putchar function
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_puchar(c);
	}
	_putchar('\n');
}
