#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @n: bytes
 * @s: pointer
 * @b: constant byte
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
