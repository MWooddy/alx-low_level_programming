#include "lists.h"

/*Aux Function*/
unsigned int _strlen(const char *str);

/**
* add_node - a function that adds a new node
* @head: head of the list
* @str: string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
/**
* _strlen -function returns length of a string
* @str: string
* Return: length
*/
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
