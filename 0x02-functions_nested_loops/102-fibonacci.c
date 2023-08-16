#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence up to 50 terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		else if (i == 1)
		{
			printf("%ld", k);
		}
		else
		{
			k += j;
			j = k - j;
			printf("%ld", k);
		}
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

