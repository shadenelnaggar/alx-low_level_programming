#include "main.h"

/**
 * print_last_digit - a function that prints the last
 * digit of a given number
 *
 * @n: takes an input of type integer
 *
 * Return: ld
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -1 * (n % 10);

	else
		ld = n % 10;

	_puthcar(ld + '0');
	return (ld);
}
