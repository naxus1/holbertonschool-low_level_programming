#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int descFileOpen, descFileWrite, letters = 0;

	if (filename == NULL)
		return (-1);

	descFileOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (descFileOpen == -1)
	{
		close(descFileOpen);
		return (0);
	}

	letters = amountLetters(text_content);

	descFileWrite = write(descFileOpen, text_content, letters);

	return (descFileWrite);
}


int  amountLetters (char *words)
{
	int i;

	for (i = 0; words[i] != '\0'; i++)
	{}

	return (i);
}
