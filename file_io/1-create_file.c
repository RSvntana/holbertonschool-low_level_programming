#include "main.h"

/**
 * create_file - create a file
 * @filename: name for the file
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
