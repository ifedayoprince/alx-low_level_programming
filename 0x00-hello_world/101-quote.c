/*
 * File: 101-quote.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <unistd.h>

/**
 * main - Prints the text: "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
