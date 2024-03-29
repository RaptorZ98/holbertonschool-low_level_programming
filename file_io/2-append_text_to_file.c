#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content to append to the file
 * Return: 1 on succes and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, writedText;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		writedText = write(file, text_content, len);
		if (writedText != len)
			return (-1);
	}
	close(file);
	return (1);
}
