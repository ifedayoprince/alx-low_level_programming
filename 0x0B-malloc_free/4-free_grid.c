/*
 * File: 4-free_grid.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com> */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2d array of integers.
 * @grid: The 2d array of integers.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
