#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to add at the end of the
 * file
 * Return: 1 if success, -1 if failure. If text_content is NULL,
 * do not add anything to the file. -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc = open(filename, O_WRONLY | O_APPEND);

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

