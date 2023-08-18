#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for finding the largest prime factor
 *
 * Description: Finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int j;
    long number = 612852475143;

    for (j = (int) sqrt(number); j > 2; j++)
    {
        if (number % j == 0)
        {
            printf("%d\n", j);
            break;
        }
    }

    return (0);
}

