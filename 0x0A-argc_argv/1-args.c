/**
 * File: 1-args.c
 * Auth:Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[]) 
{
	printf("%d\n", argc-1);
	return (0);
}
