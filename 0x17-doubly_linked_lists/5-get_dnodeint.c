#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of 
 * a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to retrieve, 
 * starting from 0.
 * Return: The node at the given index or 
 * NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return head;

		head = head->next;
	}

	return (NULL);
}
