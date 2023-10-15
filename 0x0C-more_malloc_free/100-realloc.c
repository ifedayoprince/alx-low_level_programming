/*
 * File: 100-realloc.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com> */

#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: A pointer to the previous block.
 * @old_size: The size in bytes of @ptr.
 * @new_size: The size in bytes for the new block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_copy, *fillerChar;
	unsigned int i;
	void *memory;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memory = malloc(new_size * sizeof(*ptr_copy));
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fillerChar = memory;
	for (i = 0; i < old_size && i < new_size; i++)
		fillerChar[i] = *ptr_copy++;

	free(ptr);
	return (memory);
}
