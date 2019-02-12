#include "holberton.h"

void jack_bauer(void)
{
	int h1, h2, s1, s2;

	for (h1 = '0'; h1 <= '9'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			for (m1 = '0'; m1 <= '9'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(m1);
					_putchar(m2);
				}
			}
		}
	}
}
