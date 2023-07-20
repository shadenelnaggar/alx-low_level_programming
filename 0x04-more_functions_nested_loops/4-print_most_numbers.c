#include "main.h"

/**
 * print_most_numbers - printing numbers from 0 - 9
 * excluding 2 and 4
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num + 48);
	}
	_putchar('\n');
}
