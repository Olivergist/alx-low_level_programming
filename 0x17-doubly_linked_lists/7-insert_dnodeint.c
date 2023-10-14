#include <stdio.h>
#include "lists.h"

/**
 * create_new_node - Creates a new dlistint_t node with a given value.
 * @n: The value to be stored in the new node.
 * @prev: The previous node in the list.
 * @next: The next node in the list.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *create_new_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	new_node->prev = prev;
	new_node->next = next;
	return new_node;
}

/**
 * insert_dnodeint_at_index - Inserts a new
 * node at a given position.
 * @h: A double pointer to the head
 * of the dlistint_t list.
 * @idx: The index at which the new
 * node should be added.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return NULL;

	if (idx == 0)
	{
		dlistint_t *new_node = create_new_node(n, NULL, current);
		if (new_node == NULL)
			return NULL;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	dlistint_t *new_node = create_new_node(n, current, current->next);
	if (new_node == NULL)
		return (NULL);

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
