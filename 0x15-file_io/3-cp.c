#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *Create_buff(char *file);
void Closed_file(int fs);

/**
 * Create_buff - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: the newly-allocated buffer.
 */
char *Create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * closed_file -A function that closes file descriptors.
 * @fs: The file descriptor that need to close
 */
void closed_file(int fs)
{
	int d;

	d = close(fs);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
		exit(100);
	}
}

/**
 * main -A functiom that take file content and copy it other file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, R, W;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = Create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	R = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		W = write(to, buff, R);
		if (to == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		R = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buff);
	closed_file(from);
	closed_file(to);

	return (0);
}
