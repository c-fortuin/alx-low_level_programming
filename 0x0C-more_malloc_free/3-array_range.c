#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range-  function that creates an array of integers
 * @min: array
 * @max: array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i = 0;
	int t = min;

	if (min > max)
		return (0);

	ar = malloc((max - min + 1) * sizeof(int));

	if (!ar)
		return (0);

	while (i <= max - min)
		ar[i++] = t++;
	return (ar);
}
