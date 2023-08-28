#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int l = 0;

	while (*s)
	{
		while (accept[l] != '\0')
		{
			if (*s == accept[l])
				return (s);
			l++;
		}
		l = 0;
		s++;
	}
	return ('\0');
}
