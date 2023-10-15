/*
 * File: 1-string_nconcat.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com> */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the 
 * 		   		concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatMem;
	unsigned int length = n;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;
	concatMem = malloc(sizeof(char) * (length + 1));

	if (concatMem == NULL)
		return (NULL);

	length = 0;
	for (i = 0; s1[i]; i++)
		concatMem[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concatMem[length++] = s2[i];

	concatMem[length] = '\0';

	return (concatMem);
}
