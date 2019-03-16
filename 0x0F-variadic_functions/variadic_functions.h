#ifndef _VARIADIC_H
#define _VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list c);
void print_int(va_list d);
void print_float(va_list d);
void print_array(va_list d);
void print_all(const char * const format, ...);

typedef struct print_function
{
	char my_character;
	void (*my_print)(va_list);
} myprint_f;


#endif
