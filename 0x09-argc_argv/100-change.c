#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:count arguments of input
 * @argv: pointer of arguments of input
 * Return: Always 0 (Success)
 */
int main(int strc, char *strv[])
{
	int sum = 0, i, n;
	int cont = 0, flag, flag2;
	int arr[5] = {25, 10, 5, 2, 1};

	if (strc == 1)
		printf("Error\n");
	else
	{
		n = atoi(strv[1]);
		if (n < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				flag = 0;
				if (arr[i] <= n && flag == 0)
				{
					flag2 = 0;
					while (sum <= n && flag2 == 0)
					{
						if (sum + arr[i] <= n)
						{
							sum += arr[i];
							cont++;
						}
						else
						{
							flag2 = 1;
						}
					}
					flag = 1;
				}
			}
			printf("%d", cont);
		}
	}
	return (0);
}
