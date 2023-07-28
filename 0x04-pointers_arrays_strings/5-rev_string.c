/*
 * File: 5-rev_string.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

	while (s[index++])
	{
		length++;
	}

	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
