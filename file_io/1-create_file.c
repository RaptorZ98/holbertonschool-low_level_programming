#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, file, writeText;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 00600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		writeText = write(file, text_content, len);
		if (writeText != len)
			return (-1);
	}
	close(file);
	return (1);
}
