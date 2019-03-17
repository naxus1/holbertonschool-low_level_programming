#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: separator of string
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	char *word;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(lista, char *);

		if (word == NULL)
			printf("(nil)");

		else
			printf("%s", word);

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}

	printf("\n");
	va_end(lista);
}
