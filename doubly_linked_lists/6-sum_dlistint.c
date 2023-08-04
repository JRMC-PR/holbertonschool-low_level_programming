#include "lists.h"
/**
 *sum_dlistint - sums the data of a int list
 *@head: points to a list
 *Return: sum or null if failed
 */
int sum_dlistint(dlistint_t *head)
{
	/*Declarations*/
	int sum = 0;
	/*check if head is empty*/
	if (head == NULL)
		return (0);
	/*move and sum*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	} /*end while*/
	return (sum);
} /*end function*/
