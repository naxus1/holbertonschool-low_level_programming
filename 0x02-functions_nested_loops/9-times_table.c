#include "holberton.h"

void times_table(void)
{
	int rep, num, result, rest2;

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
				rest2 = 0;
				rest2 = num++;
				rest2 = rest2 / 2;

				if(num != 9 && rest2 < 4)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}

}
