#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{	char i = '0';

	while (i <= 'f')
	{
		if(i <= '9' ||(i >= 'a' && i <= 'f'))
		{
		putchar(i);
		i++;
		}
	putchar('\n');
	return (0);
}
