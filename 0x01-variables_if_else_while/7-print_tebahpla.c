#include <stdio.h>
/**
 * main - Entry point
 * This program print the reverse alphabeth.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph > 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
