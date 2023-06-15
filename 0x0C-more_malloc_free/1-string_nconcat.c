#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat-  function that concatenates two strings
 * @n: index
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[j++];

	p[i] = '\0';
	
	return (p);
}
