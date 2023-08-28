#include "main.h"
/**
 * _strstr - function that locates a substring.
 *@haystack: first value -char
 *@needle: second value - char
 *
 * Return: char with result
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0, b = 0, k, m = 0, l, i = 0;
	char *p;

	while (needle[count] != '\0')
	{
		count++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (count == 0)
		return (haystack);
	while (haystack[m] != '\0')
	{
		if (haystack[m] == needle[0])
		{
			p = &haystack[m];
			l = m;
			b = 0;
			for (k = 0; k < count; k++)
			{
				if (haystack[l] == needle[k])
					b++;
				l++;
			}
		}
		if (b == count)
			return (p);
		m++;
	}
	return ('\0');
}
