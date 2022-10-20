#include "lists.h"

/**
* free_list - a function that frees a list
* @head:element to be freed
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
