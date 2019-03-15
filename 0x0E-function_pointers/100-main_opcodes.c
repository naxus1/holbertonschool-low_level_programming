#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc:count arguments of input
 * @argv: pointer of arguments of input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1] < 0))
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
