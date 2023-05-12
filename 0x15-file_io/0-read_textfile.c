#include "main.h"

/**
 * read_textfile - that reads text from a file and prints it.
 *
 * @filename: the name of file to read.
 *
 * @letters: the number of bytes to read.
 *
 * Return: the number bytes read/printed.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
