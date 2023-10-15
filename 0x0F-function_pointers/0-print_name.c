/*
 * File: 0-print_name.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
