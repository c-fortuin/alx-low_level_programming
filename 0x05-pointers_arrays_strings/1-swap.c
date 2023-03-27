#include "main.h"
/**
 * swap_int - Swap the value of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
