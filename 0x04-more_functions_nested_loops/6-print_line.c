#include "main.h"

/**
 * print_line - Prints a line of characters
 * @n: The number of underscores to print
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}

