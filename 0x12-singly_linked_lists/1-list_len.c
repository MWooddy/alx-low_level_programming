#include "lists.h"

/**
* list_len - a function that returns the number of elements
* structure: list
* @h: pointer
* Return: numbers of elements
*/
size_t list_len(const list_t *h)
{
	unsigned int countNodes = 0;

	while (h != NULL)
	{
		countNodes++;
		h = h->next;
	}
	return (countNodes);
}
