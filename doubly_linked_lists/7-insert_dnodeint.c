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
	temp = *h;
	/*check if head is NULL*/
	if (*h == NULL)
	{
		*h = new_node;
		(*h)->n = n;
		return (new_node);
	}
	/*if idx is 0*/
	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	new_node->n = n; /*set n value*/
	/*start moving to find the location*/
	while (temp != NULL && count != idx)
	{
		temp = temp->next;
		count++;
	} /*end while*/
	if (temp == NULL)
		return (NULL);
	temp->prev->next = new_node; /*prev node nex point to new node*/
	new_node->next = temp; /*new point to temp*/
	new_node->prev = temp->prev;
	if (temp)
		temp->prev = new_node;
	return (new_node);
} /*end function*/
