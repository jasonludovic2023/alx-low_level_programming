#include "main.h"
/**
 * _isupper - checks if a character is upper
 * @c: the character
 * Return: 1 if letter is upper, 0 ortherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
