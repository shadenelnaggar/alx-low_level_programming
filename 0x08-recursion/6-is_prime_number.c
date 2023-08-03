#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that checks if a given number is prime
 * @n: input number
 * @n2: given number
 * Return: 0 or 1
*/

int check_p(int n, int n2);
int is_prime_number(int n)
{
	return (check_p(n, 2));
}

/**
 * check_p - checks all numbers less than n
 * @n: input number
 * @n2: given number
 * Return: an integer
*/

int check_p(int n, int n2)
{
	if (n2 >= n && n > 1)
	{
		return (1);
	}
	else if (n % n2 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_p(n, n2 + 1));
	}
}
