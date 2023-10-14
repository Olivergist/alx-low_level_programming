#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node 
 * at a given position.
 * @h: A double pointer to the head of the 
 * dlistint_t list.
 * @idx: The index at which the new node 
 * should be added.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, 
 * or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return new_node;
	}

	while (i < idx - 1)
	{
		if (current == NULL)
		{
			free(new_node);
			return NULL;
		}
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
