#include "lists.h"
/**
 *free_dlistint- free a dlist
 *@head: a pointer to a node
 */
void free_dlistint(dlistint_t *head)
{
	/*Declarations*/
	dlistint_t *temp;
	/*check if where pointed is not null*/
	if (head == NULL)
		return;
	temp = head;
	/*move along the list*/
	while (head->next != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	} /*end while*/
	/*move to the final and delete*/
	head = head->next;
	free(temp);
	free(head);
} /*end function*/

