#include "lists.h"
#include <stdlib.h>
/**
 *free-list - a fucntion that frees a list
 *@head: pointer to the start of a list
 */
void free_list(list_t *head)
{
	/*Declaraations*/
	list_t *temp;
	/*set temp to head*/
	temp = head;
	/*Move head, delete temp, set temp tp head*/
	while (head->next != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(head);
} /*end function*/
