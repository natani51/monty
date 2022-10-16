#include "monty.h"
/**
 * delete_node - delete node at nth index of double linked list
 * @head: pointer to head
 * @index: integer
 * Return: address of node inserted at the nth index or null if failed
 */
int delete_node(stack_t **head, unsigned int index)
{
	stack_t *temp;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			if (temp->next)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
			else
				temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
