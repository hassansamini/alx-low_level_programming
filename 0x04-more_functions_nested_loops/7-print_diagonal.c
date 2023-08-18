#include "main.h"

/**
 * print_line - Prints a \ n times
 * @n: The number of slashes to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('\');
		i++;
	}

	_putchar('\n');
}

