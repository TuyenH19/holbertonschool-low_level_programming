#include"main.h"
/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of current file
 * @text_content: content tobe appended to filename
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, byteswritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		byteswritten = write(fd, text_content, len);
		if (byteswritten == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
