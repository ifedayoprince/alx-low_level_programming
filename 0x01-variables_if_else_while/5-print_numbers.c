/*
 * File: 5-print_numbers.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Print all single digit number of base 10 starting from 0.
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
