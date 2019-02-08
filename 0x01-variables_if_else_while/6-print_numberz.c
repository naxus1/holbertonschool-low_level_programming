#include <stdio.h>
/**
 * main - Entry point
 *the program return the alphabet using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{

int num;
int new_line;

new_line = '\n';

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

putchar(new_line);

return (0);
}
