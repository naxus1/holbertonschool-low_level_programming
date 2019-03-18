#include "variadic_functions.h"
#include <stdio.h>
 /**
 * print_numbers - print numbers
 * @separator: separator of string
 * @n: number of  argumentst
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lista);
}
