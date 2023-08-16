#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		++i;
	}
}

