#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alp[i] != 'q' && alp[i] != 'e')
			putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
