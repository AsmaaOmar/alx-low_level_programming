/**
 * create_file - check the code
 * @filename: const char
 * @text_content: char
 * Return: 1 on success, -1 on failure (file can not be created)
 */

#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
