#include <stdio.h>
#include "lists.h"

/**
 *  All of a linked list's elements are printed using the print_list function.
 * @h: point to the list_t list
 * 
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
