#include "main.h"
/**
 * read_textfile- Read text-file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: k- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}
