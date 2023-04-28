#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t to print
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u} %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
