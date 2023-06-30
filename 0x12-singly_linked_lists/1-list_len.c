#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * size_t list_len- function that returns the number of 
 * elements in a linked list_t list
 * @h: pointer
 * Return: Number of elemnts in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
