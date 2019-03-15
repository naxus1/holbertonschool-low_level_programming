#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Add de arguments
 * @n:Size of argments
 *
 * Return: Add the arguments 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int suma = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(lista, n);

	for (i = 0 ; i < n; i++)
	{
		suma += (va_arg(lista, int));
	}

	va_end(lista);
	return (suma);
}
