#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWYXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}

	for (j = 0; j < 26; j++)
	{
		putchar(ALP[j]);
	}
	putchar('\n');
	return (0);
}
