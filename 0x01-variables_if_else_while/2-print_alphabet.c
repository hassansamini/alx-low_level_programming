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
	n='a';

	while (n<='z')
	{
	putchar(n-32);
	n++;
	}
	putchar('\n')
	return (0);
}
