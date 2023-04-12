#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of char
 * @size: Size of array
 * @c: Char to fill in the array
 * Return: Array to filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
