#include "lists.h"

/**
*free_listint - frees a listint_t list
*@head: head
*Retutn: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual);
		actual = next;
	}
}
