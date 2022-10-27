#include "lists.h"

/**
*pop_listint -deletes head node of a listint_t
*@head:head
*Return: if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *deleted_node;
	int num;

	if (*head == NULL)
	{
		return (0);
	}
	deleted_node = *head;
	num = deleted_node->n;
	*head = deleted_node->next;
	free(deleted_node);
	return (num);
}
