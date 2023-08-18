#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 10 followed by a newline
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

