#include "lists.h"
/**
 *dlistint_len - retunr the lenght of the dlist
 *@h - points to the first node of the list
 *Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*Declarations*/
	size_t dlist_len = 0;

	while (h != NULL)
	{
		h = h->next;
		dlist_len++;
	} /*end while*/
	return (dlist_len);
} /*end function*/
