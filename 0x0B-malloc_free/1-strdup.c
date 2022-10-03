#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - points to a newly allocated space in memory
* @str: string to duplicate
* Return: pointer to duplicated string in allocated memory
*/
char *_strdup(char *str)
{
	char *dup_str;
	int length = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		length++, i++;
	}
	length++;
	dup_str = malloc(sizeof(char) * length);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		*(dup_str + i) = *(str + i);
		i++;
	}
	return (dup_str);
}
