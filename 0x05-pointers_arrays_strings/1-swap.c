#include "main.h"
/**
 * swap_int - function exchange two intenger
 * @a: is the first pointer
 * @b: is the second pointer
 * Return: void function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
