#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the
 * @argv: the
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fileFrom = -1, fileTo = -1, readLen, writeLen;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	if (argv[1] != NULL)
		fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fileTo < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (readLen != 0)
	{
		readLen = read(fileFrom, buff, 1024);
		if (readLen < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeLen = write(fileTo, buff, readLen);
		if (writeLen < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fileFrom) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom), exit(100);
	if (close(fileTo) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo), exit(100);
	return (0);
}
