#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that prints all possible
 * combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstDigit = 0, secDigit;

	while (firstDigit <= 99)
	{
		secDigit = firstDigit;
		while (firstDigit <= 99)
		{
			if (secDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secDigit / 10) + 48);
				putchar((secDigit % 10) + 48);

				if (firstDigit != 98 || secDigit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
