#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * p_char - Print character
 * @lista:char to print
 * @sep: Separator
 * Return: Always 0 (Success)
 */
void myp_char(va_list lista, char *sep)
{
	printf("%c%s", va_arg(lista, int), sep);
}

/**
 * print_int - Print integer
 * @lista: integer to print
 * @sep: Separator
 * Return: Print integer
 */
void print_int(va_list lista, char *sep)
{
	printf("%d%s", va_arg(lista, int), sep);
}

/**
 * print_float - Print float
 * @lista: Float to print
 * @sep: Separator
 * Return: Print float
 */
void print_float(va_list lista, char *sep)
{
	printf("%f%s", (va_arg(lista, double)), sep);
}

/**
 * print_array - Print strig
 * @lista: string to print
 * @sep: Separator
 * Return: Print string
 */
void print_array(va_list lista, char *sep)
{
	char *p;

	p = va_arg(lista, char *);

	if (p == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s%s", p, sep);
}


/**
 * print_all - Entry point
 * @format:is a list of types of arguments passed to the function
 *
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *p;
	va_list lista;
	myprint_f my_array[] = {
		{'c', myp_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_array}
	};

	va_start(lista, format);
	p = ", ";

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (my_array[j].my_character == format[i])
			{
				my_array[j].my_print(lista, p);
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
