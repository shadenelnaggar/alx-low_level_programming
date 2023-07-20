#include "main.h"

/**
 * print_diagonal - printing a diagonal line
 * @n: input of type integer
*/

void print_diagonal(int n)
{
	int p, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
		{
			for (sp = 0; sp < p; sp++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
