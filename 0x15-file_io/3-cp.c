#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * print_error - prints an error to the standard error
 * @message: specific error for ech type of error message
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * exit_error_message - error message printed out to the console
 * @message: specific error message for each type of error
 * @exit_code: specific number printed out that is unique to each
 * error
 */
void exit_error_message(const char *message, int exit_code)
{
	print_error(message);
	exit(exit_code);
}
/**
 * main - copies the content of a file to another file
 * @argc: arguments passed to the function
 * @argv: parameters passed to the function
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fdes_from = open(file_from, O_RDONLY);
	int fdes_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_error_message("Usage: cp file_from file_to", 97);

	if (fdes_from == -1)
		exit_error_message("Can't read from file", 98);
	if (fdes_to == -1)
	{
		close(fdes_from);
		exit_error_message("Can't write to file", 99);
	}

	while ((bytes_read = read(fdes_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fdes_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fdes_from);
			close(fdes_to);
			exit_error_message("Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fdes_from);
		close(fdes_to);
		exit_error_message("Can't read from file", 98);
	}
	if (close(fdes_from) == -1)
		exit_error_message("Can't close fd", 100);
	if (close(fdes_to) == -1)
		exit_error_message("Can't close fd", 100);

	return (0);
}
