#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: const char type pointer to the file
 * @letters: size_t type
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr, rd, c;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		return (0);
	}

	c = close(fd);
	if (c == -1)
	{
		return (0);
	}

	return (wr);
}
