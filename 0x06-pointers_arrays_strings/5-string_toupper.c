#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @c1: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *c1)
{
	int count = 0;

	while (*(c1 + count) != '\0')
	{
		if ((*(c1 + count) >= 97) && (*(c1 + count) <= 122))
			*(c1 + count) = *(c1 + count) - 32;
		count++;
	}

	return (c1);
}
