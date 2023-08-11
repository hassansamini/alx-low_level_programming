#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print negative or positive
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    putchar('\n');

    return 0;
}



