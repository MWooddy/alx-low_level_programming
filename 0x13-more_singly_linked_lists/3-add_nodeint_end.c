#include "lists.h"

/**
*add_nodeint_end -  adds a new node at the end 
*@head: head
*@n: int
*Return:address of the new element,or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node, *last_pos;

	new_end_node = malloc(sizeof(listint_t));

	if (new_end_node == NULL)
	{
		return (NULL);
	}
	new_end_node->n = n;
	new_end_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		last_pos = *head;
		while (last_pos->next)
		{
			last_pos = last_pos->next;
		}
		last_pos->next = new_end_node;
	}
	return (new_end_node);
}
