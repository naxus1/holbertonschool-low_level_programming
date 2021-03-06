#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name:name to print
 * @f: Function pointer that print.
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
