#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times and using _putchar
 *
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	int num, row, ct;

	for (row = 1; row <= 10; row++)
	{
		for (ct = 0; ct <= 14; ct++)
		{
			num = ct;
			if (ct > 9)
			{
				_putchar(1 + 48);
				num = ct % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
