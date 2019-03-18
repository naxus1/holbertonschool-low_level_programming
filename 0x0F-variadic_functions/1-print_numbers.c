#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Entry point
 * @separator: Separator of string
 * @n: number of  argumentst
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list lista;
	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s %d", separator, va_arg(lista, int));
		}

		else
			printf("%d", va_arg(lista, int));
	}
	va_end(lista);
}
