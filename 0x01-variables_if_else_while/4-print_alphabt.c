#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Print lower case letter a-z except q/e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' || n != 'q')
		{
		putchar(n);
		n++;
		}
		else
		{
		}
	}

	putchar('\n');
	return (0);
}
