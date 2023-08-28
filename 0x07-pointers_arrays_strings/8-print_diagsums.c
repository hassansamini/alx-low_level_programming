#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int i, j, sm1 = 0, sm2 = 0, k, l = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sm1 += a[l];
			if (j == k)
				sm2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sm1, sm2);
}
