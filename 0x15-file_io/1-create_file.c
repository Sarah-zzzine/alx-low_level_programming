#include "main.h"

/**
 * create_file -A function that Creates a file.
 * @filename: Is the name of the file to create.
 * @text_content: A string to write to the file.
 *
 * Return: If the function fails -1.
 *         Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int O, W, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(O, text_content, lenght);

	if (O == -1 || W == -1)
		return (-1);
	close(O);

	return (1);
}
