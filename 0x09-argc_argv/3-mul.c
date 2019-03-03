#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc: Count of arguments to input
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int resul;

	if (argc == 3)
	{
		resul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", resul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
