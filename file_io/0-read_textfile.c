#include "main.h"
#include <stdlib.h>
/**
* read_textfile - read a text file and print it to POSIX standard output
* @filename: name of the text file to be read
* @letters: number of letter to be read and print
* Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	close(fd);
	free(buffer);

	return (bytesWritten);
}
