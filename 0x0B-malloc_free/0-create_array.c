/*
 * File: 0-create_array.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates a character array and
 *                initializes it with a character
 * @size: the size of the array.
 * @c: a specific char.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned size, char c)
{
	unsigned i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
