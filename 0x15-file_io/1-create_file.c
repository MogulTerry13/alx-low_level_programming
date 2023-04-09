#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	/*declaration of variables*/
	int file, word, length = 0;

	if (filename == NULL)
		return (-1);

	/*loop to check for length*/
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	word = write(file, text_content, length);

	if (file == -1 || word == -1)
		return (-1);

	close(file);

	return (1);
}

