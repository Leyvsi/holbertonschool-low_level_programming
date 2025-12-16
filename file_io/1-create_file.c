#include "main.h"

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_wrote;

	if (filename == NULL)
		return (-1);

	/* Open file: Create if not exists, Truncate if it does, Write Only */
	/* Permissions: 0600 (rw-------) */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate length of text_content */
		while (text_content[len])
			len++;

		/* Write to the file */
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1 || n_wrote != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
