#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int result;

srand(time(0));
n = rand() - RAND_MAX / 2;
result = n % 10;

if (result > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, result);
}

else if (result == 0)
{
printf("Last digit of %d is 0 and is 0\n", n);
}

else if (result < 6 &&  n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
}
return (0);
}
