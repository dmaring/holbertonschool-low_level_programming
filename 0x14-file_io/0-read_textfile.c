#include "holberton.h"

/**
 * read_textfile - read text file and print it to POSIX stdout
 * @filename: filename to open and read
 * @letters: number of letter to read and print
 *
 * Return: 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, numread, numwrote;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	/* OPEN */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	/* READ */
	numread = read(fd, buf, letters);
	if (numread == -1)
	{
		free(buf);
		return (0);
	}

	/* WRITE */
	numwrote = write(STDOUT_FILENO, buf, numread);
	if (numwrote == -1 || numread != numwrote)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (numwrote);
}
