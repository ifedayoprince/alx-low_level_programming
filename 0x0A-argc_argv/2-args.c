/**
 * File: 2-args.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]) 
{
	int i = 0;
	while (i < argc) 
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
