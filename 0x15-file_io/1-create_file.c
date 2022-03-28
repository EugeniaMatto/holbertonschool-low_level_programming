#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer to name file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	close(fd);

	if (wr != i)
		return (-1);

	return (1);
}

