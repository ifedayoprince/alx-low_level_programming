/**
 * File: 0-create_array.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars,
 *                and initializes it with a specific char.
 * @size: the size of the array
 * @c: character to fill the array with
 *
 * Return: a pointer to the array or NULL if size = 0 or it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array = malloc(size * sizeof(char));
    int i = 0;
    if (array == NULL || size == 0)
    {
        return NULL;
    }
    while (i < size) {
        array[i] = c;
        i++;
    }
    array[i] = '\0';
    return array;
}