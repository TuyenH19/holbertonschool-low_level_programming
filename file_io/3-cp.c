#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * copy_file - function to check if a file is opened and handle error
 * @file_from: initial file to check
 * @file_to: destination file to copy
 * @argv: argument vector
 * Return: Nothing
*/
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content of a file from one another
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	int src, dest;
	ssize_t len, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_file(src, dest, argv);

	len = read(src, buffer, 1024);
	while (len > 0)
	{
		nwr = write(dest, buffer, len);
		if (nwr == -1 || nwr != len)
			error_file(-1, 0, argv);
		len = read(src, buffer, 1024);
	}
	if (len == -1)
		error_file(0, -1, argv);

	if (close(src) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	return (0);
}
