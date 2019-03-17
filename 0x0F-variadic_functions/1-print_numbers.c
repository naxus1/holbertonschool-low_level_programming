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
	unsigned int i;
	va_list lista;

	if (separator == NULL)
		return;

	char_tmp = separator;
	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s%d", separator, lista, const unsigned int));
		}
		else
			printf("%d", va_arg(lista, int));
	}

	printf("\n");
	va_end(lista);
}
