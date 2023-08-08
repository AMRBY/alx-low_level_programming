#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid  - find uppercase
 * Description: find uppercase
 * @width : arg
 * @height : arg
 * Return: a
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int h;
	int y, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) *  height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) *  width);
		if (a[h] == NULL)
		{
			free(a);
			while (i <= h)
			{
				free(a[i]);
				i++;
			}
			return (NULL);
		}

		for (y = 0; y < width; y++)
			a[h][y] = 0;
	}
	return (a);
}
