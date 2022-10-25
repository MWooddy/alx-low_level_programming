#include "lists.h"

/**
*insert_nodeint_at_index -inserts a new node 
*@head:head
*@idx: index
*@n: int
*Return:the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *actual, *next;
	actual = *head;
	next = malloc(sizeof(listint_t));

	if (next == NULL)
	{
		return (NULL);
	}
	next->n = n;
	if (idx == 0)
	{
		next->next = actual;
		*head = next;
		return (*head);
	}
	while (idx > 1)
	{
		actual = actual->next;
		idx--;
		if (actual == NULL)
		{
			free(next);
			return (NULL);
		}
	}
	next->next = actual->next;
	actual->next = next;
	return (next);
}
