#include "main.h"
#include <stdio.h>
void error97(void);
void close100(int file);
/**
 * main -Write a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to, *buffer;
	int fd_from, fd_to, rd;

	if (argc != 3)
		error97();
	file_from = argv[1];
	file_to = argv[2];

	fd_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	buffer = malloc(1024 * sizeof(char));
	if (!buffer)
		return (-1);
	fd_from = open(file_from, O_RDONLY);

	rd = 1024;
	for (; rd == 1024; ) /* mientras rd sea igual a 1024 */
	{
		rd = read(fd_from, buffer, 1024);
		if ((rd == -1) || (fd_from == -1))
		{
			close100(fd_to);
			close100(fd_from);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		write(fd_to, buffer, rd);
	}
	close100(fd_from);
	return (0);
}
/**
 * error97 -  error97
 */
void error97(void)
{
	write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
	exit(97);
}

/**
 * close100 - error al cerrar file
 * @file: file a cerrar
 */
void close100(int file)
{
	int a = close(file);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file);
		exit (100);
	}
}
