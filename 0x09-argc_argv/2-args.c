#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc: Count of arguments to input
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
