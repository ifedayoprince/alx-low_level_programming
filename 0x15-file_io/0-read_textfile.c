/*
 * File: 0-read_textfile.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * read_textfile - reeads the content of a text file and
 *                 write to stdout.
 *
 * @filename: the name of the file.
 * @letters: the number of letters to read.
 *
 * Return: the number of bytes read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int count = 0;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL || fd == -1)
		return (0);

	count = read(fd, buff, letters);
	buff[count] = '\0';

	close(fd);
	count = write(STDOUT_FILENO, buff, strlen(buff));

	if (count == -1)
		return (0);

	free(buff);

	return (count);
}
