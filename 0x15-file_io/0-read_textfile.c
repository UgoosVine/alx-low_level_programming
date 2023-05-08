#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - The program reads text file and prints to STDOUT
 * @filename: test file being read
 * @letters: number of letters to be read
 *
 * Return: wr - number of bytes read and printed,
 * 0 file is NULL, Function faills.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
