/*
 * File: 6-print_line.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed (length of the line).
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
