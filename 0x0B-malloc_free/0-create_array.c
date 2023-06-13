#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars, and
 *  initializes it with a specific char
 *  @c:characters
 *  @size:size of array 
 *  Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

	if (size == 0 || str == NULL)
		return (NULL);
}
