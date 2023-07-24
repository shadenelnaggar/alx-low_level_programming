#include <unistd.h>

/**
 * _putchar - writes the character c t stdout
 * @c: takes input of the character to print
 *
 * Return: returns 1 on success, returns -1 on error.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
