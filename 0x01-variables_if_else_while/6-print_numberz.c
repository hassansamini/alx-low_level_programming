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

	while (i <= 9)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}
