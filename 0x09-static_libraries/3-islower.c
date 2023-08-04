#include "main.h"

/**
 * _islower - a function to check if a character is lowercase
 *
 * @c: checks ino=put of function
 *
 * Return: returns 1 if 'c' is lowercase
 * returns 0 otherwise (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
