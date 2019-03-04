#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:count arguments of input
 * @argv: pointer of arguments of input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, i, n, cont, flag, flag2;
	int arr[5] = {25, 10, 5, 2, 1};

	sum = 0;
	cont = 0;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		n = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			flag = 0;

			if (arr[i] <= n && flag == 0)
			{
				flag2 = 0;

				while (sum <= n && flag2 == 0)
				{
					if ((sum + arr[i]) <= n)
					{
						sum += arr[i];
						cont++;
					}
					else
						flag2 = 1;
				}
				flag = 1;
			}
		}
		printf("%d\n", cont);
	}

	return (0);
}
