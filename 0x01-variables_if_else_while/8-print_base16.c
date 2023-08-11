#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
    	putchar(digit);
	digit++;
    }

    digit = 'a';

    while (digit <= 'f')
    {
	putchar(digit);
	digit++;
    }

    putchar('\n');
