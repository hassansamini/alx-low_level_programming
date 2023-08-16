#include "main.h"

/**
 * _isalpha - Checks for lowercase/uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if lowercase/uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	/*
	 * ASCII values for lowercase letters (a to z): 97 to 122
	 * ASCII values for uppercase letters (A to Z): 65 to 90
	 */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

