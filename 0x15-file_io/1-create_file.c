/*
 * File: 1-create_file.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * create_file - creates a file to the current working directory.
 *
 * @filename: the name of the file to create.
 * @text_content: the content to write to file.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	ret = write(fd, text_content, strlen(text_content));
	if (ret == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
