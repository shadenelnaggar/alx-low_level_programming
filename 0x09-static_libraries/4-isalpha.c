#include "main.h"

/**
 * _isalpha - a function that checks if a character is
 * either lowercase or uppercase
 *
 * @c: takes input from a function
 *
 * Return: 1 if c is true otherwise return 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
