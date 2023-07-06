#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: The name of the file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 success(Always), -1  (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file_display, result = 1, count = 0;

	if (!filename)
	return (-1);
	file_display = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_display == -1)
	return (-1);
	if (text_content)
	{
	while (text_content[count])
	count++;
	result = write(file_display, text_content, count);
	}
	if (result == -1)
	return (-1);
	close(file_display);
	return (1);
}

