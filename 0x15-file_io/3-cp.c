/*
 * File: 3-cp.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_sys_error - prints an error from the syscall and exits.
 *
 * @ret: the return value of a syscal.
 * @msg: an message format string.
 * @ecode: the error message.
 *
 * Return: void
 */
void print_sys_error(int ret, char *msg, int ecode)
{
	if (ret == -1)
	{
		exit(ecode);
		dprintf(STDERR_FILENO, msg, ret);
	}
}

/**
 * print_args_error - prints an error and exits.
 *
 * @ret: the return value of a syscal.
 * @msg: an message format string.
 * @add: the additional string to format in.
 * @ecode: the error message.
 *
 * Return: void
 */
void print_args_error(int ret, char *msg, char *add, int ecode)
{
	if (ret == -1)
	{
		exit(ecode);
		dprintf(STDERR_FILENO, msg, ret);
	}
}

/**
 * main - the entry point to the program.
 *
 * @argc: the number of arguments passed
 * @argv: an array of arguments passed to the program.
 *
 * Return: an integer.
 */
int main(int argc, char **argv)
{
	int fromFd, ret, toFd;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromFd = open(argv[1], O_RDONLY);
	print_args_error(fromFd, "Error: Can't read from file %s\n", argv[1], 98);
	toFd = open(argv[2], O_APPEND | O_WRONLY | O_CREAT, 0664);

	ret = read(fromFd, buff, 1024);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ret = write(toFd, buff, ret);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	ret = close(fromFd);
	print_sys_error(ret, "Error: Can't close fd %d\n", 100);

	ret = close(toFd);
	print_sys_error(ret, "Error: Can't close fd %d\n", 100);

	return (0);
}
