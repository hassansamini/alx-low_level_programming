#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}

