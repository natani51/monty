#include "monty.h"
/**
 * print_rev - print double linked list
 * @h: pointer to hed
 * Return: number of nodes
 */
size_t print_rev(stack_t *h)
{
	size_t i = 0;

	while (h->next)
	{
		h = h->next;
	}
	while (h)
	{
		h = h->prev;
		i++;
	}
	return (i);
}
