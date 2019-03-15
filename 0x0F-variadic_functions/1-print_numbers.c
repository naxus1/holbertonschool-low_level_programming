#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
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
