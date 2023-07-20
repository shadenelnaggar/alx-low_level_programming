#include "main.h"

/**
 * print_numbers - prints digits from 0 - 9 using _putchar function
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
