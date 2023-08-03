#include "lists.h"
/**
 *add_dnodeint_end - adds a new node @ the end
 *@head: a ponter to a poiter that points toa list
 *@n: data to be stored
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*Declarations*/
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	/*check allocation*/
	if (new_tail == NULL)
		return (NULL);
	new_tail->next = NULL;/*set final next to NULL*/
	new_tail->n = n;
	/*verify head content*/
	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	} /*end if */
	temp = *head;
	/*move along the list*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	} /*end while*/
	new_tail->prev = temp;
	temp->next = new_tail;
	return(temp);
} /*end function*/
