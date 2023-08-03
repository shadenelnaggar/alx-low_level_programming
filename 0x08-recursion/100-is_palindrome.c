#include "main.h"

/**
 * _li - returns last index of the string
 * @s: pointer to a given string
 * Return: an integer
*/

int is_palindrome(char *s);
int checker(char *s, int fst, int lst, int mod);
int _li(char *s)
{
	int num = 0;

	if (*s > '\0')
	{
		num = num + _li(s + 1) + 1;
	}
	return (num);
}

/**
 * is_palindrome - checks if a given string is palindrome
 * @s: pointer to input string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int last = _li(s);

	return (checker(s, 0, last - 1, last % 2));
}

/**
 * checker - a function that's a checker for the palindrome
 * @s: given string
 * @fst: first moves from right to left
 * @lst: last moves from left to right
 * @mod: an integer
 * Return: 0 or 1
*/

int checker(char *s, int fst, int lst, int mod)
{
	if ((fst == lst && mod != 0) || (fst == lst + 1 && mod == 0))
	{
		return (1);
	}
	else if (s[fst] != s[lst])
	{
		return (0);
	}
	else
	{
		return (checker(s, fst + 1, lst - 1, mod));
	}
}
