#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - The program allocates 1024 bytes for a buffer.
 * @file: File nameto store buff char
 *
 * Return: Pointer to new buff.
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - Closes file descriptor.
 * @fd: File descriptor to close.
 */

void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies th content of a file to another file.
 * @argc: Number of args. supplied to program.
 * @argv: An array of pointer to args.
 *
 * Return: 0 (succes).
 *
 * Description: if arg count in incorret- exit code 97.
 *		if file_from does not exist or cannot be read - exit code 98.
 *		if file_to cannot be creadted or written to - exit code 99.
 *		if file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file%s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"ERROR: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
