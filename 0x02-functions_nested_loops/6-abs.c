#include "main.h"

/**
 * _abs - a function that coputes the absolute value
 * of an integer
 *
 * @n: takes an input of type integer
 *
 * Return: 0 (Succes)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
