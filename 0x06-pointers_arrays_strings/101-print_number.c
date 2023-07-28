#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: integer input
 * Return: 0
*/

void print_number(int n)
{
	unsigned int num;

	num = n1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
