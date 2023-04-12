#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the
 * @argv: the
 * Return:
 */

int main(int argc, char *argv[])
{
	int fileFrom = -1, fileTo = -1, readLen, writeLen;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	if (argv[1] != NULL)
		fileFrom = open(argv[1], O_RDONLY);
	if (file < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	if (fileTo < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit(99);
	}
	while (readLen != 0)
	{
		readLen = read(fileFrom, buff, 1024);
		if (readLen > 0)
		{
			writeLen = write(fileTo, buff, readLen);
		}
		if (readLen < 0 || writeLen < 0)
		{
			
		}
	}
	close(fileFrom);
	close(fileTo);
	return (0);
}
