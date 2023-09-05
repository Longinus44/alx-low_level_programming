#include "main.h"
/**
 * main - function that copy file content to another file
 * @argc: the argument
 * @argv: parameter
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int to_fd, org_fd;
	const char *file_to, *file_from;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return 97;
	}

	file_from = argv[1];
	file_to = argv[2];

	org_fd = open(file_from, O_RDONLY);
	if (org_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return 98;
	}

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(org_fd);
		return 99;
	}

	while ((bytes_read = read(org_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Write operation failed for file %s\n", file_to);
			close(org_fd);
			close(to_fd);
			return 99;
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Read operation failed for file %s\n", file_from);
		close(org_fd);
		close(to_fd);
		return 99;
	}

	if (close(org_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		return 100;
	}

	return 0;
}
