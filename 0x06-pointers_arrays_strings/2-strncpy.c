#include "main.h"
/**
 *_strncpy - copy copy value of src in dest
 *@dest: first pointer
 *@src: second pointer
 *@n: integer parameter to compare index to
 *Return: returns new copy of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
