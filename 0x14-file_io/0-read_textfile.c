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

	fileDescOpen = open(filename, O_RDWR);

	if (fileDescOpen == -1)
	{
		close(fileDescOpen);
		return (0);
	}

	bufferRead = calloc(letters, sizeof(char));
	if (bufferRead == NULL)
	{
		close(fileDescOpen);
		return (0);
	}
	fileDescRead = read(fileDescOpen, bufferRead, letters);

	if (fileDescRead == -1)
	{
		close(fileDescOpen);
		free(bufferRead);
		return (0);
	}

	fileDescWrite = write(STDOUT_FILENO, bufferRead, letters);

	if (fileDescWrite == -1)
	{
		free(bufferRead);
		return (0);
	}

	free(bufferRead);
	return (fileDescRead);
}
