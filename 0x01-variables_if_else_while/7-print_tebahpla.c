#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Print lower case letter
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
	putchar(n);
	n++;
	}

	putchar('\n');
	return (0);
}
