#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -A function that reads a text file
 * and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: the letter they should read and print.
 *
 * Return: If the function fails or filename is NULL -0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t O, R, W;
	char *Buff;

	if (filename == NULL)
		return (0);

	Buff = malloc(sizeof(char) * letters);
	if (Buff == NULL)
		return (0);

	O = open(filename, O_RDONLY);
	R = read(O, Buff, letters);
	W = write(STDOUT_FILENO, Buff, R);

	if (O == -1 || R == -1 || W == -1 || W != R)
	{
		free(Buff);
		return (0);
	}

	free(Buff);
	close(O);

	return (W);
}
