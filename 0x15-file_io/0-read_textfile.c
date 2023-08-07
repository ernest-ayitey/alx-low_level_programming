#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read test file and print STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 * @Return: The actual number of bytes read and printed,
 *  or 0 when the function fails or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
