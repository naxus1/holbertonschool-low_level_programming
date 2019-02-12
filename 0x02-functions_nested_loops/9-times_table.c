#include "holberton.h"

void times_table(void)
{
	int rep, num, result;

	for(rep = 0; rep <= 9; rep++)
	{
		for(num = 0; num <= 9; num++)
		{
			result = rep * num;

			if (result / 2 > 4)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');

				if(num != 9)
				{
					_putchar(',');
					_putchar(' ');
				}

			}
		       
			else
			{
				_putchar(result + '0');

				if(num != 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}

			}

		}
		_putchar('\n');
	}

}
