#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * this program print ten times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 1; i <= 10 ; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
