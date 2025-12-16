#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * 0 if the file cannot be opened or read,
 * 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t n_read;
	ssize_t n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	if (fd == -1 || n_read == -1 || n_wrote == -1 || n_wrote != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_wrote);
}
