#include "main.h"

/**
 * print_square - printing a square using the character #
 * @size: size of the square
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
