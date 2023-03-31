#include "main.h"
#include <stdio.h>
/**
 * reverse_array - unction that reverses the content of an array of integers
 *@a: array
 *@n: nmber of elemnts of array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
