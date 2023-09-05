#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read texts a text file and print to standard output
 * @filename: Text file to read
 * @letters: Number of letters to be read
 * Return: w- Actual number of bytes to read and be printed
 * 0- when fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

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
