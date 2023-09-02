#include "main.h"
/**
 *  * _strcat - concatenates two strings,
 *   * @dest: destination.
 *    * @src: source.
 *     * Return: the pointer to dest.
 *      */
char *_strcat(char *dest, char *src)
{
		int count = 0, c2 = 0;

			while (*(dest + count) != '\0')
					{
								count++;
									}

				while (c2 >= 0)
						{
									*(dest + count) = *(src + c2);
											if (*(src + c2) == '\0')
															break;
													count++;
															c2++;
																}
					return (dest);
}#include "main.h"
/**
 *  * _strcat - concatenates two strings,
 *   * @dest: destination.
 *    * @src: source.
 *     * Return: the pointer to dest.
 *      */
char *_strcat(char *dest, char *src)
{
		int count = 0, c2 = 0;

			while (*(dest + count) != '\0')
					{
								count++;
									}

				while (c2 >= 0)
						{
									*(dest + count) = *(src + c2);
											if (*(src + c2) == '\0')
															break;
													count++;
															c2++;
																}
					return (dest);
}
