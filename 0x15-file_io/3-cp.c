#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *filename);
void close_file_descriptor(int folder);

/**
 * allocate_buffer - Allocates 1024 bytes of memory for a buffer.
 * @filename: The name of the file whose contents will be stored in the buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 * @folder: The file descriptor to be closed.
 */
void close_file_descriptor(int folder)
{
	int result;

	result = close(folder);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", folder);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the number of arguments is incorrect, exit with code 97.
 *              If file does not exist or cannot be read, exit with code 98.
 *              If the file cannot be created or written to, exit with code 99.
 *              If either file cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(file_to, buffer, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file_descriptor(file_from);
	close_file_descriptor(file_to);
	return (0);
}
