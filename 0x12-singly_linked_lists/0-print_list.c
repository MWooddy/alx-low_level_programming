#include "lists.h"

/**
*print_list - a function that prints all the elements
* @h: Pointer
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int countNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		countNodes++;
	}
	return (countNodes);
}
