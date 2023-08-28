#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0, i = 0;
	unsigned int b = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
				b++;
			k++;
		}
		i++;
		k = 0;
	}
	return (b);
}
