#include "main.h"
/**
 * _strcmp - compares two strings
 * @c1: first string.
 * @c2: second string.
 * Return: 0 if c1 and c2 are equals,
 * another number if not.
 */

int _strcmp(char *c1, char *c2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(c1 + i) == '\0') && (*(c2 + i) == '\0'))
			break;
		op = *(c1 + i) - *(c2 + i);
		i++;
	}

	return (op);
}
