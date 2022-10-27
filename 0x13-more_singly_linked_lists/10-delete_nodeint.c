#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index
*@head:head
*@index:index
*Return:1 if it succeeded, -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	actual = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (i < (index - 1))
	{
		actual = actual->next;
		if (actual == NULL)
		{
			return (-1);
		}
		i++;
	}
	next = actual->next;
	actual->next = next->next;
	free(next);
	return (1);
}
