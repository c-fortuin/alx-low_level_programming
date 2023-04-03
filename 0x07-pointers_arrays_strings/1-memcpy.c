#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @n: bytes
 * @src: memory are
 * @dest: memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
