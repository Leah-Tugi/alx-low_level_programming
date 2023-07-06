#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: - variable that stores file to be read
 * @letters: - number of letters to read and printed
 * Return: 1 on success else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_this_file, read_this_file, write_to_file;
	char *buffer;

	if (filename == NULL)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	open_this_file = open(filename, O_RDONLY);
	read_this_file = read(open_this_file, buffer, letters);
	write_to_file = write(STDOUT_FILENO, buffer, read_this_file);

	if (open_this_file == -1 || read_this_file == -1 ||
			write_to_file == -1 || write_to_file != read_this_file)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(open_this_file);
	return (write_to_file);
}
