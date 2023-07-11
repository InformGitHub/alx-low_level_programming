#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * Description: function
 * @width: iwidth
 * @height: iheight
 * Return: pointer's array of 2 dim
 */
int **alloc_grid(int width, int height)
{
	int **Grid;
	int k, k2;

	if (width <= 0 || height <= 0)
		return (NULL);
	Grid = malloc(sizeof(int *) * height);
	if (Grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		Grid[k] = malloc(sizeof(int) * width);
			if (Grid[k] == NULL)
			{
				for (; k >= 0; k--)
					free(Grid[k]);
				free(Grid);
				return (NULL);
			}
	}
	for (k = 0; k < height; k++)
	{
		for (k2 = 0; k2 < width; k2++)
			Grid[k][k2] = 0;
	}
	return (Grid);
}
