#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @letters: number of letters it should read and print
 * @filename: name of the text file
 * Return: actual number of letters it could read and print. If
 * the file cannot be opened or read, return 0. If filename is
 * NULL return 0. If write fails or does not write the expected
 * amount in bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc = open(filename, O_RDONLY);
	char *buffer = (char *)malloc(letters + 1);
	ssize_t bytesread = read(filedesc, buffer, letters);
	ssize_t byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (filename == NULL)
		return (0);

	if (filedesc == -1)
		return (0);

	if (buffer == NULL)
	{
		close(filedesc);
		return (0);
	}

	if (bytesread == -1)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}

	if (byteswritten == -1 || byteswritten != bytesread)
	{
		free(buffer);
		close(filedesc);
		return (0);
	}
	free(buffer);
	close(filedesc);
	return (bytesread);
}

