#include "main.h"

/**
 * create_file - The program creates a file.
 * @filename: Pointer to name of file to create.
 * @text_content: Pointer to string to write file.
 *
 * Return: -1 if fail, 1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length] ;)
			length++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);
}
