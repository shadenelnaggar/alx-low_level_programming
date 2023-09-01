#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: num of bits flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int ctr = 0;

	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (ctr);
}
