#include <stdio.h>
/**
 * main - function will print largest prime factor of given value
 * Return: function will return zero if compiled properly
 */

int main(void)
{
	long num = 612852475143, i;

	for (i = 2; i < num;)
	{
		if (num % i == 0)
		{
			num /= i;
			i = 2;
		}
		else
			i++;
	}
	printf("%lu\n", num);
	return (0);
}
