#ifndef _VARIADIC_H
#define _VARIADIC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void myp_char(va_list c, char *);
void print_int(va_list d, char *);
void print_float(va_list d, char *);
void print_array(va_list d, char *);
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
	void (*my_print)(va_list, char *);
} myprint_f;


#endif
