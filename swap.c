#include "monty.h"

/**
 * m_swap - swaps the top two elements of the stack
 * @head: double pointer to the head ot the stack
 * @count_lines: the number of the line in file
 * Return: void
 */
void m_swap(stack_t **head, unsigned int count_lines)
{
	stack_t *temp;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", count_lines);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;
	(*head)->prev = temp;
	(*head)->next = temp->next;
	temp->prev = NULL;

	if (temp->next)
		temp->next->prev = *head;
	temp->next = *head;
	*head = temp;
}
