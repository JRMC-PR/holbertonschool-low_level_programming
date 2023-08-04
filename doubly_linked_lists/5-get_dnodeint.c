#include "lists.h"
/**
 **get_dnodeint_at_index - gets data from a spesific node
 *@head: points to the head of a list
 *@index: node to retive
 *Return: the node or null if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*Declarations*/
	size_t node_count = 0 ;
	dlistint_t *temp;
	/*Check if head is NULL*/
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp->next != NULL && node_count != index)
	{
		temp = temp->next;
		node_count++;
	} /*end while*/
	return (temp);
} /*end function*/
