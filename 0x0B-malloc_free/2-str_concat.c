#include "main.h"
#include <stdlib.h>
/**
 * str_concat - unction that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, ci;
	char *conct;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";
	i = ci = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	
	conct[i] = '\0';
	return (conct);
}
