#include <stdio.h>
#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 
 * 0 at a given index
 * @n: Pointer
 * @index: Index to the number
 * Return: 1 on succes , -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
