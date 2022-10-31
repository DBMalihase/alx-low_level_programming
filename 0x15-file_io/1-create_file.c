#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer
 * @text_content: a pointer to a string to write to the file
 * Return: (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, counter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (counter = 0; text_content[counter];)
			counter++;
	}

	/**
	 * O_CREAT= Create the file if it doen not exist
	 * O_RDWR= Open for read and write
	 * O_TRUNC= Write, starting at the beginning of the file
	 * 600= permission to read and write to a file for the owner
	 */

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, counter);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
