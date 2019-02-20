#include "holberton.h"

int _atoi(char *s)
{
	int cont, i, br, n;

	i = 0;
	br = 0;
	n = 0;

	while (br == 0 || s[i] != '\0')
	{
		if (s[i]=='-')
		{
			contn++;
		}

		if(s[i] >= '0' || s[i] <= '9')
		{
			n = n * 10 + s[i];

			if !(s[i] >= '0' || s[i] <= '9')
			{
				br = 1;
			}
		}

		i++;
	}

	if(cont % 2 == 0)
	{
		return (n);
	}

	else
		return(-n);
}
