#include "variadic_functions.h"
/**
 * print_all - Entry point
 * @format:is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list lista;
	char *p, *word;
	int i;

	p = "";
	i = 0;

	va_start(lista, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", p, va_arg(lista, int));
			break;
		case 'i':
			printf("%s%d", p, va_arg(lista, int));
			break;
		case 'f':
			printf("%s%f", p, va_arg(lista, double));
			break;
		case 's':
			word = va_arg(lista, char *);
			if (word == NULL)
			{
				word = "(nil)";
			}
			printf("%s%s", p, word);
			break;
		default:
			i++;
			continue;
		}
		p = ", ";
		i++;
	}
	printf("\n");
	va_end(lista);
}
