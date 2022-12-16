#include "main.h"
/**
 * _isadigit - checks if a character is digit
 * @c: the character
 * Return: 1 if character is digit, 0 ortherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
