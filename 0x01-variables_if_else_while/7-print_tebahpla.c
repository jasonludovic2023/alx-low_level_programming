#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
