#include "main.h"

/**
 * _islower - Checks for lower/uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{
        /* ASCII values for lowercase letters (a to z): 97 to 122 */
        if ((c >= 97 && c <= 122)|| ( c>=65 && c<=90))
        {
                return (1);
        }
        return (0);
}
