#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int result;

srand(time(0));
n = rand() - RAND_MAX / 2;
result= n % 10;

printf("Last digit of %d is %d and", n,result );
 
if(result > 5)
{
printf(" is greater than 5\n");
}

else if(result == 0)
{
printf(" is 0\n");
}

else if(result < 6 && result != 0)
{
printf(" is less than 6 and not 0");
}
return (0);
}
