#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Concat 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: Concat s1 and s2 concat  0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *myarray;
	unsigned int size = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (j = 0; s2[j] != '\0'; j++)
	{}

	size = i + j + 1;

	myarray = (char *) malloc(sizeof(char) * size);

	if (myarray == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		myarray[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		myarray[i] = s2[j];
 
	myarray[i] = '\0';

	return (myarray);
}
