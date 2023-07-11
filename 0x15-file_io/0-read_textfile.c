#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text = (char *)malloc(letters);
	size_t file = open(filename, O_RDONLY);
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	if ((int)file == -1)
		return (0);

	if (text == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, text, letters);
	if (bytesRead == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, text, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(text);
		close(file);
		return (0);
	}

	free(text);
	close(file);
	return (bytesWritten);
}

