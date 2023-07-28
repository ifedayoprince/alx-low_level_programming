/*
 * File: 0-strcat.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @destination.
 * @destination: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @destination.
 *
 * Return: A pointer to the destination string @destination.
 */
char *strcat(char *destination, const char *src)
{
	int index = 0, destination_length = 0;

	while (destination[index++])
		destination_length++;

	for (index = 0; src[index]; index++)
		destination[destination_length++] = src[index];

	return (destination);
}
