/*
 * File: 2-calloc.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *fillingChar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	fillingChar = memory;

	for (i = 0; i < (nmemb * size); i++)
		fillingChar[i] = '\0';

	return (memory);
}
