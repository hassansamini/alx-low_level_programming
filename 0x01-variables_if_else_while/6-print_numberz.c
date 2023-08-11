#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Print lower case letter
 * Return: Always 0 (Success)
 */
int main(void)
{	int i = 0;
	int n = 9;

	while (i <= n)
	{
	putchar(i+'0');
	i++;
	}
	putchar("\n");
	return (0);
}
