#include <unistd.h>

/**
 * _putchar - writes given character to stdout
 * @c: the given input character to print
 * Return: 1 if succeeded, -1 when fail
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
