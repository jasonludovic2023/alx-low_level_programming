#include "main.h"
/**
 * _isalpha - checks if a character is letter
 * @c: the character
 * Return: 2 if letter is letter, 0 ortherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
