#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: a string input of type char
 *
 * Return: None
*/

void rev_string(char *s)
{
	int i = 0;
	int j = -1;
	char temp;

	while (s[++j] != '\0')
		;

	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
