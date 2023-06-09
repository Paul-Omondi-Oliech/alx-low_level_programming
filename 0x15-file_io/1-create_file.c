#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to the string to be writen to the file.
 * Return: 1(on success), that is if the file exists and
 * -1(on failure), that is if the file is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int j, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(j, text_content, len);

	if (j == -1 || w == -1)
		return (-1);

	close(j);

	return (1);
}
