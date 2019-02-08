#include <stdio.h>
/**
 * main - Entry point
 * This program return de number`s in base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alp;
	int num;

	for (alp = '0'; alp <= '9'; alp++)
	{
		putchar(alp);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
