#include "main.h"
/**
 *  * _strncat - concatenates two strings,
 *   * @dest: destination.
 *    * @src: source.
 *     * @n: amount of bytes used from src.
 *      * Return: the pointer to dest.
 *       */
char *_strncat(char *dest, char *src, int n)
{
		int count = 0, c2 = 0;

			while (*(dest + count) != '\0')
					{
								count++;
									}

				while (c2 < n)
						{
									*(dest + count) = *(src + c2);
											if (*(src + c2) == '\0')
															break;
													count++;
															c2++;
																}
					return (dest);
#include "main.h"
					/**
					 *  * _strncat - concatenates two strings,
					 *   * @dest: destination.
					 *    * @src: source.
					 *     * @n: amount of bytes used from src.
					 *      * Return: the pointer to dest.
					 *       */
					char *_strncat(char *dest, char *src, int n)
					{
							int count = 0, c2 = 0;

								while (*(dest + count) != '\0')
										{
													count++;
														}

									while (c2 < n)
											{
														*(dest + count) = *(src + c2);
																if (*(src + c2) == '\0')
																				break;
																		count++;
																				c2++;
																					}
										return (dest);

