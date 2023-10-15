/**
 * File: 1-strdup.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Creates a new space in memory and
 *           copy a string to that spot
 *
 * @str: the string to be copied
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *strMem;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len += 1;

	strMem = malloc(sizeof(char) * (len + 1));

	if (strMem == NULL)
		return (NULL);

	while (i < (int) sizeof(str))
	{
		strMem[i] = str[i];
		i++;
	}

	strMem[len] = '\0';

	return (strMem);
}
