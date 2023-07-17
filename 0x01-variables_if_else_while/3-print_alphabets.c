/*
 * File: 3-print_alphabets.c
 * Author: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0 
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l<= 'Z'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
