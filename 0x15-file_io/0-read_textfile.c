#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: word- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *let;
	ssize_t file;
	ssize_t word;
	ssize_t text;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	let = malloc(sizeof(char) * letters);
	text = read(file, let, letters);
	word = write(STDOUT_FILENO, let, text);

	free(let);
	close(file);
	return (word);
}
