#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid  - find uppercase
 * Description: find uppercase
 * @grid : arg
 * @height : arg
 * Return: a
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
}
