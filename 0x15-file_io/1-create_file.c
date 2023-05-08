#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 if success, -1 if failure. If filename is NULL, return
 * -1. If text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);

	if (filedesc == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t byteswritten = write(filedesc, text_content, strlen(text_content));

		if (byteswritten == -1)
		{
			close(filedesc);
			return (-1);
		}
	}
	close(filedesc);
	return (1);
}
