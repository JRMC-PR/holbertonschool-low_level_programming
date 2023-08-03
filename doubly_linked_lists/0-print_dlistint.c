#include "lists.h"
/**
 *print_dlisdtint - print the contents of a list
 *@h: points to the first node of a dlist
 *Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*Declarations*/
	size_t count = 0;
	/*move alon the list*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
		
	}
	return (count);
} /*end function*/
