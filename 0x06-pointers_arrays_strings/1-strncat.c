#include "main.h"
/**
 * _strncat - add two characters with condition
 * @dest: is the first  pointer
 * @src: is the second pointer
 * @n: is number of byte second pointer
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])

		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
