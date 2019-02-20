#include "holberton.h"
/**
 * _atoi - Entry point
 *@s: pointer
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int contn, i, br, n;

	i = 0;
	br = 0;
	n = 0;
	contn = 0;

	while (br == 0)
	{
		if (s[i] == '-')
		{
			contn++;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + s[i] - '0';


			if (!(s[i + 1] >= '0' &&  s[i + 1] <= '9'))
			{
				br = 1;
			}
		}

		i++;
	}

	if (contn % 2 == 0)
	{
		return (n);
	}

	else
		return (-n);
}
