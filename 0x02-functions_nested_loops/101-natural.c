#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number, sum;

	sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum = sum + number;
		}
	}

	printf("%d", sum);

	return (0);
}
