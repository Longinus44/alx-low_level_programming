#include "main.h"
/**
 * append_text_to_file - function that appends text to a file
 * @filename: name of the file top open
 * @text_content: text to append
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
