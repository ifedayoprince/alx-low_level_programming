/*
 * File: 2-print_alphabet.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * Prints the alphabet in lowercase.
 *
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
