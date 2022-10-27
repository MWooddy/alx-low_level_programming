#include "lists.h"

/**
*free_listint2 - frees a listint_t list
*@head: head
*Return: nothing void function
*/
void free_listint2(listint_t **head)
{
	listint_t *actual, *next;

	if (head == NULL)
	{
		return;
	}
	actual = *head;
	while (actual != NULL && head != NULL)
	{
		next = actual;
		actual = actual->next;
		free(next);
	}
	*head = NULL;
}
