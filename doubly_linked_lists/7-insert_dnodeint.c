#include "lists.h"
/**
 **insert_dnodeint_at_index - inserts a node in a given position
 *@h: a pointer to a pointer that points to a list
 *@idx: where new node should be
 *@n: data to be stored
 *Return: add of node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *tmp = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	while (tmp)
		tmp = tmp->next, count++;
	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	for (count = 0; count < idx; count++)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	new_node->next = tmp;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
} /*end function*/
