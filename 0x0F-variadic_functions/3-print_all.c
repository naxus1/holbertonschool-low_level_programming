#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>



void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *p;
	va_list lista;
	myprint_f my_array[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_array}
	};

	va_start (lista, format);


	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if(my_array[j].my_character == format[i] && i < 3)
			{
				p = ", ";
				my_array[j].my_print(lista, p);
				j = 4;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

void print_char(va_list lista, char *sep)
{
	printf("%c%s", va_arg(lista, int), sep);
}

void print_int(va_list lista)
{
	printf("%d", (va_arg(lista, int)) );
}

void print_float(va_list lista)
{
	printf("%f", (va_arg(lista, double)));
}

void print_array(va_list lista)
{
	char *p;
	p = va_arg(lista, char *);

	if(p == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", (va_arg(lista, char *)));
}
