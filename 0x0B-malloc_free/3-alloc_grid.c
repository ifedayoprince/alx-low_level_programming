/*
 * File: 3-alloc_grid.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a
 *              2 dimensional array of integers.
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2d array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twodarray;
	int heightIndex, widthIndex;

	if (height <= 0 || width <= 0)
		return (NULL);

	twodarray = malloc(sizeof(int *) * height);

	if (twodarray == NULL)
		return (NULL);

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		twodarray[heightIndex] = malloc(sizeof(int) * width);
		if (twodarray[heightIndex] == NULL)
		{
			for (; heightIndex >= 0; heightIndex--)
			{
				free(twodarray[heightIndex]);
			}

			free(twodarray);
			return (NULL);
		}
	}

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		for (widthIndex = 0; widthIndex < width; widthIndex++)
		{
			twodarray[heightIndex][widthIndex] = 0;
		}
	}

	return (twodarray);
}
