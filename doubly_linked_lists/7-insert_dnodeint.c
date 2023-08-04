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
	/*Declarations*/
	unsigned int count = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	/*verify the new malloc*/
	if (new_node == NULL)
		return (NULL);
	/*check if head is NULL*/
	if (*h == NULL)
	{
		*h = new_node;
		(*h)->n = n;
		return (new_node);
	}
	new_node->n = n; /*set n value*/
	/*start moving to find the location*/
	temp = *h;
	while (temp != NULL && count != idx - 1)
	{
		temp = temp->next;
		count++;
	} /*end while*/
	if (temp == NULL)
		return (NULL);
	new_node->prev = temp->prev; /*point to prev*/
	new_node->next = temp->next; /*point to next*/
	temp->next = new_node;
	return (new_node);
} /*end function*/
