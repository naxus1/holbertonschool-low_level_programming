#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int iterator;

	if (n < 99)
	{
		for (iterator = n; iterator <= 98; iterator++)
		{
			printf("%d", iterator);

			if(iterator != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}

	else
	{
		for (iterator = n; iterator >= 98; iterator--)
		{
			printf("%d", iterator);

			if (iterator != 98)
			{
				printf(",");
				printf(" ");
			}
		}

		
	}

	printf("\n");
}
