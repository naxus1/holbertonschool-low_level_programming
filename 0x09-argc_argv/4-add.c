#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Count of arguments to input
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, flag, adds, a;

	adds = 0;
	flag = 0;
	a = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					flag = 1;
				}
			}
		}
		if (flag != 1)
		{
			for (i = 0; i < argc; i++)
			{
				adds += atoi(argv[i]);
			}
			printf("%d\n", adds);
		}
		else
		{
			printf("Error\n");
			a = 1;
		}
	}
	return (a);
}
