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
	const char *char_tmp;

	if (separator == NULL)
		char_tmp = "";

	else
	{
		char_tmp = separator;
		va_start(lista, n);

		for (i = 0; i < n; i++)
		{
			if (i > 0 && separator != NULL)
			{
				printf("%s%d", char_tmp, va_arg(lista, int));
			}

			else
				printf("%d", va_arg(lista, int));
		}
	}

	printf("\n");
	va_end(lista);
}
