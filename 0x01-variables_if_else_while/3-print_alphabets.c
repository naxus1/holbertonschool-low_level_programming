#include <stdio.h>
/**
 * main - Entry point
 * This program print the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */


int main(void)
{
char alp_low;
char alp_upp;
char new_line;

alp_low = 'a';
alp_upp = 'A';
new_line = '\n';

while (alp_low <= 'z')
{
putchar(alp_low);
alp_low++;
}

while (alp_upp <= 'Z')
{
putchar(alp_upp);
alp_upp++;
}

putchar(new_line);
return (0);
}
