#include <stdio.h>
#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip 
 * to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r;
	int count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			count++;
	}
	return (count);
}
