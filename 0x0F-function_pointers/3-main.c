/*
 * File: 3-main.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int number1, number2;
	char *option;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	option = argv[2];
	number2 = atoi(argv[3]);

	if (option[1] != '\0' || get_op_func(option) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*option == '/' && number2 == 0) ||
	    (*option == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(option)(number1, number2));

	return (0);
}