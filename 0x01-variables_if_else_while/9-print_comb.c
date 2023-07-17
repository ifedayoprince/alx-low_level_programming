/*
 * File
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * Prints all possible combinations of single-digit numbers.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9) 
		{
			continue;
		} 
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	

	return (0);
}
