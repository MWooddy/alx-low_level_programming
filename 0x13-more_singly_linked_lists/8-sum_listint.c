#include "lists.h"

/**
*sum_listint - returns the sum of all the data (n)
*@head:head
*Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nose;
	nose = head;

	if (head == NULL)
	{
		return (0);
	}
	while (nose != NULL)
	{
		sum = sum + nose->n;
		nose = nose->next;
	}
	return (sum);
}
