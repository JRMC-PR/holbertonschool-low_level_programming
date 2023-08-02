#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 **add_node_end- adds a new node to the end of a list
 *@head: points to the begining of a list
 *@str: points to a constant string
 *Return: &(add) of new tail of NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*Variables*/
	list_t *new_tail = (list_t *)malloc(sizeof(list_t));
	list_t *temp;
	/*chekc str if empty*/
	if (str == NULL || new_tail == NULL)
		return (NULL);
	/*copy the content to th e new node*/
	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	new_tail->next = NULL;
	/*preper for moving with temp*/
	temp = *head;
	if (new_tail->str == NULL)
	{
		free(new_tail);
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_tail;
	return (new_tail);
} /*end function*/
