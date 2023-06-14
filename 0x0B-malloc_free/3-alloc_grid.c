#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- function that returns a pointer to a 2 dimensional array of 
 * integers
 * @widt: the width of array
 * @hight: hight of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int*) * height);

	if (a == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}

	return (a);
}
