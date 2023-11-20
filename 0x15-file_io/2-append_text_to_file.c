#include "main.h"

/**
 * append_text_to_file - truncates new content to the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: the text to append.
 *
 * Return: 1 on success,
 *        Otherwise - (-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		perror("[error] ->");
		return (-1);
	}
	ret = write(fd, text_content, strlen(text_content));

	if (ret == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
