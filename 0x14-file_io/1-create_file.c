#include "holberton.h"
int amountLetters(char *words);
/**
 * create_file - create a file
 * @filename: name file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int descFileOpen, descFileWrite, letters = 0;

	if (filename == NULL)
		return (-1);

	descFileOpen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descFileOpen == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	letters = amountLetters(text_content);

	descFileWrite = write(descFileOpen, text_content, letters);
	if (descFileWrite == -1)
		return (-1);

	close(descFileOpen);

	return (1);
}
/**
 * amountLetters - count the character of an string
 * @words: string for counter
 * Return: numbers of letters in the string
 */

int amountLetters(char *words)
{
	int i;

	for (i = 0; words[i] != '\0'; i++)
	{}

	return (i);
}
