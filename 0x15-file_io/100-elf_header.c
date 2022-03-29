#include "main.h"

#include <elf.h>

#include <string.h>
#include <stdio.h>
#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif
/**
 * main -Write a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	ElfW(Ehdr) header;
	char *file;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Error\n", 98);
		exit(98);
	}
	file = argv[1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error\n", 98);
		exit(98);
	}
	if ((memcmp(header.e_ident, ELFMAG, SELFMAG) == 0))
	{
	printf(":p");
	}

	write(STDERR_FILENO, "Error\n", 98);
	exit(98);
}
