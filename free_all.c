#include "monty.h"
/**
 * free_all - function for free
 */
void free_all(void)
{
	stack_t *node_free;
	stack_t *temp = NULL;

	node_free = *global_free;

	while (node_free)
	{
		temp = node_free->next;
		free(node_free);
		node_free = temp;
	}
}
