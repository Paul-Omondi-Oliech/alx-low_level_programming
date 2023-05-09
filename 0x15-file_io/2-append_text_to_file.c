#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success(if file exists) and
 * -1 on failure(if file does not exist)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	w = write(j, text_content, len);

	if (j == -1 || w == -1)
		return (-1);

	close(j);

	return (1);
}
