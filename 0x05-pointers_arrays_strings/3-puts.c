#include "main.h"
/**
 * _puts - print string
 * @str: is the pointer
 * Return: void function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
