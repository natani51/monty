#include "monty.h"
/**
 * print - print double linked list
 * @h: pointer to hed
 * Return: number of nodes
 */
size_t print(stack_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
