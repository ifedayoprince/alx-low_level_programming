/**
 * File: 4-add.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main (int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	while (i < argc)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * main - Returns 'true' if string is a number.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Returns 'true' if is number
 *         Otherwise - 'false'.
 */
bool isnumber(char string[])
{
	int len = strlen(string);
	int i = 0;
	while (i < len)
	{
		if (isdigit(string[i]) == 0)
			return false;

		i++;
	}

	return true;
}
