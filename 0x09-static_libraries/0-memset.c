#include "main.h"
/**
 * _memset - Fill block of memory with specific value
 * @s: Starting address of memory
 * @b: Desired value
 * @n: Number of bytes to change
 * Return: Changed array with new value n bytes
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
