#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Description - this funtion print the alphabet
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
