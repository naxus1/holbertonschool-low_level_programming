#include "variadic_functions.h"
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
	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));

		if(i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lista);
}
