#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: Integer to be printed
 *
 * Description: This function prints an integer. It can handle negative numbers.
 */
void print_number(int n)
{
	long number; /* Convert int to long */
	long k; /* Power of 10 */
	int l; /* Boolean check */

	number = n;

	/* Handle negatives */
	if (number < 0)
	{
		number *= -1;
		_putchar('-');
	}

	/* Calculate place value */
	k = 1;
	l = 1;
	while (l)
	{
		if (number / (k * 10) > 0)
			k *= 10;
		else
			l = 0;
	}

	/* Print digits */
	while (number >= 0)
	{
		if (k == 1)
		{
			_putchar(number % 10 + '0');
			number = -1;
		}
		else
		{
			_putchar((number / k % 10) + '0');
			k /= 10;
		}
	}
}

