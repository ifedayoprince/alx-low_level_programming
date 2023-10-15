/*
 * File: 1-array_iterator.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a
 *                  parameter for each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

