#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_list - a fucntion that frees a list
 *@head: pointer to the start of a list
 */
void free_list(list_t *head)
{
	/*Declaraations*/
	list_t *temp;
	/*Move head, delete temp, set temp tp head*/
	if (head == NULL)
	{
		return;
	}
	/*set temp to head*/
	temp = head;
	while (head->next != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
	head = head->next;
	free(temp->str);
	free(head);
	free(temp);
} /*end function*/
