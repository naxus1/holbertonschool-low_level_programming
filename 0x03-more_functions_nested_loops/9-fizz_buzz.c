#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int iterator;

	for (iterator = 1; iterator <= 100; iterator++)
	{
		if ((iterator % 3 == 0) && (iterator % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		else if (iterator % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (iterator % 5 == 0)
		{
			printf("Buzz");

			if (iterator != 100)
			{
				printf(" ");
			}
		}

		else
		{
			printf("%d ", iterator);
		}
	}

	printf("\n");
	return (0);
}
