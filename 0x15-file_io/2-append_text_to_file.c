#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, fd, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	wr = write(fd, text_content, i);
	close(fd);

	if (wr != i)
		return (-1);

	return (1);
}
