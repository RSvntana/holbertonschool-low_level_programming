#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, wr, fd;
	char *buff = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);

	free(buff);
	close(fd);

	return (wr);
}
