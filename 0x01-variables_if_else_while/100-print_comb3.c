#include <stdio.h>
/**
 * main - Entry point
 * this program prints all posible diferent combination of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num1;

	for (num = '0'; num <= '9'; num++)
	{
		for (num1 = num + 1; num1 <= '9'; num1++)
		{
			putchar(num);
			putchar(num1);

			if (num != '8' || num1 != '9')
			{
				putchar(',');
				putchar(' ');
			}


		}

	}

	putchar('\n');
	return (0);
}
