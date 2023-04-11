#include "main.h"

/**
 * read_textfile - reads a text and prints it
 * @filename: the name of the file to be read
 * @letters: number of letter to be read and printed
 * Return: the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int wordsR, file, printed;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	wordsR = read(file, buff, letters);
	if (wordsR == -1)
	{
		free(buff);
		return (0);
	}

	printed = write(1, buff, wordsR);
	close(file);
	free(buff);
	return (printed);
}
