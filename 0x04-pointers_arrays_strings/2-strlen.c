 #include "holberton.h"
/**
 * _strlen - Return the size of the string
 * @s: Pointer
 * Return: Always 1 (Success)
 */
int _strlen(char *s)
{
	int crash, contador;

	crash = 0;
	contador = 0;

	while (crash == 0)
	{
		if (*s != '\0')
		{
			contador++;
			s++;
		}
		else
			crash = 1;
	}

	return (contador);
}
