#include "main.h"

/**
 * append_text_to_file -A function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, lenght);

	if (O == -1 || W == -1)
		return (-1);

	close(O);

	return (1);
}
