#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: input number
 * @v: square root calculated
 * Return: int (sqrt)
*/

int sqr(int n, int v);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - calculates sqaure root
 * @n: input number
 * @v: square root calculated
 * Return: int (sqrt)
*/

int sqr(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (sqr(n, v + 1));
	}
	else
	{
		return (-1);
	}
}
