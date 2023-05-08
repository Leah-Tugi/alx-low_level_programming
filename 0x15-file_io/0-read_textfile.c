#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function to read a text file 
 * and prints it to the POSIX standard output.
 * @filename: - variable to store file to be read
 * @letters: - number of letters to be read and printed
 * Return: 1 for success else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write_f, open_file, write_f;
	char *buffer;

	if (filename == NULL)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	write_f = open(filename, O_RDONLY);
	open_file = read(write_f, buffer, letters);
	write_f = write(STDOUT_FILENO, buffer, open_file);

	if (write_f == -1 || open_file == -1 ||
			write_f == -1 || write_f != open_file)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(write_f);
	return (write_f);
}
