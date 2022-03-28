#include "main.h"
/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: pointer to name file
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ret, lec;
	char *bufer;

	if (filename == NULL)
		return (0);

	bufer = malloc(letters * sizeof(char));
	if (bufer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	lec = read(fd, bufer, letters);
	ret = write(1, bufer, lec);

	free(bufer);
	close(fd);
	if (ret != lec)
		return (0);

	return (ret);
}

