#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 on success, -1 on fail
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
