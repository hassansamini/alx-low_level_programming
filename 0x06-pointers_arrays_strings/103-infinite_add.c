#include "main.h"
#include <stdio.h>
/**
 * infinite_adding - addings two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_adding(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, ops, bc, dr1, df, adding = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bc = c1;
	else
		bc = c2;
	if (size_r <= bc + 1)
		return (0);
	r[bc + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, df = *(n2 + c2) - 48;
	while (bc >= 0)
	{
		ops = dr1 + df + adding;
		if (ops >= 10)
			adding = ops / 10;
		else
			adding = 0;
		if (ops > 0)
		*(r + bc) = (ops % 10) + 48;
		else
			*(r + bc) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, df = *(n2 + c2) - 48;
		else
			df = 0;
		bc--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
