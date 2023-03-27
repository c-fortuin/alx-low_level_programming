#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the lenght of a string
 * @s: The string
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
	lenght++;
	return (lenght);
}
