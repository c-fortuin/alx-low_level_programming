#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Concatation of two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *cnct;
	int i = 0;
	int a = 0;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";
	
	while (s1[i] != '\0')
		i++;

	while (s2[a] != '\0')
                a++;

	cnct = malloc(sizeof(char) * (i + a + 1));

	if (cnct == NULL)
		return (NULL);
	i = 0;
	a = 0;

	while (s1[i] != '\0')
	{
		cnct[i] = s1[i];
		i++;
	}

	while (s2[a] != '\0')
	{
		cnct[i] = s2[a];
			i++, a++;
	}
	
	cnct[i] = '\0';

	return (cnct);
}

