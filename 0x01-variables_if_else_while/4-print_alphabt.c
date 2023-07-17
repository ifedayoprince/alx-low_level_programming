/*
 * File: 4-print_alphabt.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * Print the alphabets in lowercase, except for q and e.
 */
int main(void)
{
	char let;
	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		} 
	}
	putchar('\n');

	return (0);
}
