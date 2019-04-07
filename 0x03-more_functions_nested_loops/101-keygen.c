#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char word;

	srand(time(NULL));
	while (i < 2772)
	{
		word = rand() % 94 + 33;
		putchar(word);
		i += word;
	}
	putchar(2772 - i);
	return (0);
}
