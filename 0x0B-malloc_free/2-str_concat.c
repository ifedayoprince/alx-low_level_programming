/*
 * File: 2-str_concat.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Allocates memory for 2 strings
 * 					and copy them (concatenate).
 * @s1 pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     with the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, concat_i = 0, i;
	char *strMemory;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	strMemory = (char *)malloc(len * sizeof(char));

	if (strMemory == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		strMemory[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		strMemory[concat_i++] = s2[i];

	return (strMemory);
}
