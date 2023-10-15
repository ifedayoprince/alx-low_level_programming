/*
 * File: 3-get_op_func.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
