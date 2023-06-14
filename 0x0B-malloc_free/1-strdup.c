#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- function that returns a pointer to a newly allocated space in 
 * memory, which contains a copy of the string given as a parameter
 * @str: Character
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *new;
	int i = 0;
	int a = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	
	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		new[a] = str[a];
	
	return (new);
}	
