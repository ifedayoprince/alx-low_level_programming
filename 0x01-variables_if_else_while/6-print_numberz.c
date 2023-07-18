/*
 * File: 6-print_numberz.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0
 */

int main(void)
{
	int nu = 0;

	for (nu = 0; nu < 10; nu++)
	{
		putchar((nu % 10) + '0');
	}
	putchar('\n');

	return (0);
}
