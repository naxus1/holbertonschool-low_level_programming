#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 * @argc:count arguments of input
 * @argv: pointer of arguments of input
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
