#include "main.h"

/**
 * _isdigit - checks if the input is a digit between 0 - 9
 * @c: input of type integer
 * Return: 1 if the input is a digit. 0 if not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
