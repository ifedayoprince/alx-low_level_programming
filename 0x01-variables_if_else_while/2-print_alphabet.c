/*
 * File: 2-print_alphabet.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{

	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
