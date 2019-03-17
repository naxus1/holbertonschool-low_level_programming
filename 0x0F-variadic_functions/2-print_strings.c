#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: separator of string
 * @n: number of arguments
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	char *word;

	if (separator == NULL)
		return;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(lista, char *);

		if (i < (n - 1))
		{
			if (word == NULL)
				printf("(nil)%s", separator);

			else
				printf("%s%s", word, separator);
		}

		else
			printf("%s", word);
	}

	printf("\n");
	va_end(lista);

}
