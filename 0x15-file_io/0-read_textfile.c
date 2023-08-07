#include "main.h"
#include <stdlib.h>
#include <fcnt1.h>
#include <unistd.h>

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

	if (filename  == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
