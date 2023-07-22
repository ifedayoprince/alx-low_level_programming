/*
 * File: 1-alphabet.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
