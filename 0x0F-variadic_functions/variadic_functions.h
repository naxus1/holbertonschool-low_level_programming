#ifndef _VARIADIC_H
#define _VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void myp_char(va_list c);
void print_int(va_list d);
void print_float(va_list d);
void print_array(va_list d);
void print_all(const char * const format, ...);

/**
 * struct print_function - Struct to print
 * @my_character: Character to review
 * @my_print: Function to print
 *
 * Description: Struct that print, according to type mycharacter
 */
typedef struct print_function
{
	char my_character;
	void (*my_print)(va_list);
} myprint_f;


#endif
