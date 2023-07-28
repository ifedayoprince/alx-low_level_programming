/*
 * File: 6-puts2.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
	{
		length++;
	}

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
