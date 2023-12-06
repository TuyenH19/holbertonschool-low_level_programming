#include"main.h"

/**
 * create_file - function to create a file
 * @filename: name of the created file
 * @text_content: content of the filename
 * Return: 1 on sucsess and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, byteswritten, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = 0;
	while (text_content[len] != '\0')
		len++;

	byteswritten = write(fd, text_content, len);
	if (byteswritten == -1)
		return (-1);

	close(fd);

	return (1);
}
