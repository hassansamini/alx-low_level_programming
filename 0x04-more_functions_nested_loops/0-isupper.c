#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: the character to be checked
 * Return: 1 for uppercase and 0 for anything else
 *
 * Description: Uppercase letters (A to Z): ASCII values 65 to 90
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

