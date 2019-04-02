#include "holberton.h"
/**
 * read_textfile - reads a text file
 * @filename: name file
 * @letters: how many letters to read and print
 * Return: 0 if error, otherwise number letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescOpen, fileDescRead, fileDescWrite;
	char *bufferRead;

	if (!filename || letters == 0)
		return (0);

	fileDescOpen = open(filename, O_RDONLY);

	if (fileDescOpen == -1)
		return (0);

	bufferRead = malloc(sizeof(char) * letters);
	if (bufferRead == NULL)
	{
		close(fileDescOpen);
		return (0);
	}

	fileDescRead = read(fileDescOpen, bufferRead, letters);
	close(fileDescOpen);

	if (fileDescRead < 0)
	{
		free(bufferRead);
		return (0);
	}

	fileDescWrite = write(STDOUT_FILENO, bufferRead, fileDescRead);

	if (fileDescWrite <= 0)
	{
		free(bufferRead);
		return (0);
	}

	free(bufferRead);
	return (fileDescWrite);
}
