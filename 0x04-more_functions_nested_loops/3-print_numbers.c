#include "main.h"

/**
 * print_numbers - prints digits from 0 - 9 using _putchar function
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_puchar(i + 48);
	}
	_putchar('\n');
}
