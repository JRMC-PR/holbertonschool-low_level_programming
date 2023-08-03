#include "lists.h"
/**
 **add_dnodeint - adds a new node to the beginign of a dlist
 *@head: points to the beginign of a list
 *@n: holds an int value
 *Return: address of new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*Declarations*/
	dlistint_t *new_head = (dlistint_t *)malloc(sizeof(dlistint_t));
	/*veryfy is allocarion failde*/
	if (new_head == NULL)
		return (NULL);
	/*create a new node*/
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	*head = new_head;
	return (new_head);
} /*end fucntion*/
