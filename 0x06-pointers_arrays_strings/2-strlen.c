#include "main.h"
/**
 * _strlen - function give the length of string
 * @s: is the pointer
 * Return: void function
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
