#include "main.h"

/**
 * read_textfile - check the code
 * @filename: const char
 * @letters: sizet
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	fclose(file);
	free(buffer);
	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}
