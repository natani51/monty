#include "monty.h"
/**
 * m_rotl - rotates the stack to the top
 * @head: double pointer to the begining of the list
 * @line_count: script line number
 */
void m_rotl(stack_t **head, unsigned int line_count)
{
	stack_t *temp, *top;
	(void) line_count;

	if (!head || !(*head) || !(*head)->next)
		return;
	temp = *head;
	top = temp->next;
	top->prev = NULL;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;

	(*head)->next = NULL;
	(*head)->prev = temp;

	*head = top;
}
